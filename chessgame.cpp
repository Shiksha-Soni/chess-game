#include <bits/stdc++.h>
using namespace std;
char board[8][8];
void initializeBoard()
{
    board[0][0] = 'r';
    board[0][1] = 'n';
    board[0][2] = 'b';
    board[0][3] = 'q';
    board[0][4] = 'k';
    board[0][5] = 'b';
    board[0][6] = 'n';
    board[0][7] = 'r';

    for (int i = 0; i < 8; i++)
        board[1][i] = 'p';

    for (int i = 2; i < 6; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            board[i][j] = '.';
        }
    }

    for (int i = 0; i < 8; i++)
        board[6][i] = 'P';

    board[7][0] = 'R';
    board[7][1] = 'N';
    board[7][2] = 'B';
    board[7][3] = 'Q';
    board[7][4] = 'K';
    board[7][5] = 'B';
    board[7][6] = 'N';
    board[7][7] = 'R';
}

void printBoard()
{
    cout << "\n    a   b   c   d   e   f   g   h\n";
    cout << "  +---+---+---+---+---+---+---+---+\n";

    for (int i = 0; i < 8; i++)
    {
        cout << (8 - i) << " |";
        for (int j = 0; j < 8; j++)
        {
            cout << " " << board[i][j] << " |";
        }
        cout << " " << (8 - i) << "\n";
        cout << "  +---+---+---+---+---+---+---+---+\n";
    }
    cout << "    a   b   c   d   e   f   g   h\n\n";
}
bool isValid(int x, int y)
{
    return x >= 0 && x < 8 && y >= 0 && y < 8;
}

bool isOpponent(char myPiece, char target)
{
    if (target == '.')
        return false;
    return (isupper(myPiece) && islower(target)) || (islower(myPiece) && isupper(target));
}

bool canMoveTo(char myPiece, char target)
{
    return target == '.' || isOpponent(myPiece, target);
}

bool isWhite(char piece)
{
    return isupper(piece);
}

bool isValidMove(int sx, int sy, int ex, int ey)
{
    char piece = board[sx][sy];
    if (piece == '.')
        return false;

    char target = board[ex][ey];
    if (!canMoveTo(piece, target))
        return false;

    int dx = ex - sx;
    int dy = ey - sy;
    int adx = abs(dx);
    int ady = abs(dy);

    switch (toupper(piece))
    {
    case 'P':
    { // Pawn
        int dir = isWhite(piece) ? -1 : 1;
        if (dy == 0)
        { // Forward move
            if (dx == dir && target == '.')
                return true;
            if (dx == 2 * dir && ((isWhite(piece) && sx == 6) || (!isWhite(piece) && sx == 1)) &&
                board[sx + dir][sy] == '.' && target == '.')
                return true;
        }
        // Capture
        if (adx == 1 && ady == 1 && isOpponent(piece, target))
            return true;
        return false;
    }
    case 'R':
    { // Rook
        if (dx != 0 && dy != 0)
            return false; // Must be horizontal or vertical

        int stepx = (dx == 0) ? 0 : dx / adx;
        int stepy = (dy == 0) ? 0 : dy / ady;
        for (int i = 1; i < max(adx, ady); i++)
        {
            if (board[sx + i * stepx][sy + i * stepy] != '.')
                return false;
        }
        return true;
    }
    case 'N':
    { // Knight
        return (adx == 1 && ady == 2) || (adx == 2 && ady == 1);
    }
    case 'B':
    { // Bishop
        if (adx != ady)
            return false;
        int stepx = dx / adx;
        int stepy = dy / ady;
        for (int i = 1; i < adx; i++)
        {
            if (board[sx + i * stepx][sy + i * stepy] != '.')
                return false;
        }
        return true;
    }
    case 'Q':
    { // Queen
        if (dx != 0 && dy != 0 && adx != ady)
            return false;
        int stepx = (dx == 0) ? 0 : dx / adx;
        int stepy = (dy == 0) ? 0 : dy / ady;
        int steps = max(adx, ady);
        for (int i = 1; i < steps; i++)
        {
            if (board[sx + i * stepx][sy + i * stepy] != '.')
                return false;
        }
        return true;
    }
    case 'K':
    { // King
        return adx <= 1 && ady <= 1;
    }
    }
    return false;
}

void makeMove(int sx, int sy, int ex, int ey)
{
    board[ex][ey] = board[sx][sy];
    board[sx][sy] = '.';
}

int main()
{
    initializeBoard();
    cout << "=== Simple Console Chess Game ===\n";
    cout << "White moves first (uppercase pieces)\n";
    cout << "Enter moves in format: e2 e4 (source destination)\n";
    cout << "Type 'quit' to exit\n\n";

    printBoard();

    bool whiteTurn = true;
    string input;

    while (true)
    {
        cout << (whiteTurn ? "White" : "Black") << "'s turn: ";
        getline(cin, input);

        if (input == "quit" || input == "exit")
            break;

        stringstream ss(input);
        string start, end;
        if (!(ss >> start >> end))
        {
            cout << "Invalid input! Use format: e2 e4\n";
            continue;
        }

        if (start.length() != 2 || end.length() != 2)
        {
            cout << "Invalid move format!\n";
            continue;
        }

        int sy = start[0] - 'a';
        int sx = 8 - (start[1] - '0');
        int ey = end[0] - 'a';
        int ex = 8 - (end[1] - '0');

        if (!isValid(sx, sy) || !isValid(ex, ey))
        {
            cout << "Invalid position!\n";
            continue;
        }

        char piece = board[sx][sy];
        if (piece == '.')
        {
            cout << "No piece at source position!\n";
            continue;
        }

        bool isWhitePiece = isWhite(piece);
        if (isWhitePiece != whiteTurn)
        {
            cout << "It's not your turn!\n";
            continue;
        }

        if (!isValidMove(sx, sy, ex, ey))
        {
            cout << "Invalid move for this piece!\n";
            continue;
        }

        makeMove(sx, sy, ex, ey);
        printBoard();

        whiteTurn = !whiteTurn;
    }

    cout << "Thanks for playing!\n";
    return 0;
}