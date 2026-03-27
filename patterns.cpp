#include <iostream>
using namespace std;
int main()
{
    // 1. print a rectangle of mxn of *.
    /*
    int m, n;
    cout << "enter number of rows";
    cin >> m;
    cout << "enter number of column";
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
        */
    // 2. print [1234 1234 1234 1234]4x4 type matrix for mxn.
    /*
    int m, n;
    cout << "enter number of rows";
    cin >> m;
    cout << "enter number of columns";
    cin >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
        */
    // 3. print ABCD in place of *.
    /*
    int n;
    cout << "enter number of rows/columns";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (char)(j + 64);
        }
        cout << endl;
    }
        */
    // 4. print star triangle.
    /*
    int n;
    cout << "enter number of rows/columns";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
        */
    // 5. print mixed triangle.
    /*
    int n;
    cout << "enter number of rows/columns";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j;
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                cout << (char)(j + 64);
            }
        }
        cout << endl;
    } */
    // 6. print inverted star triangle.
    /*
    int n;
    cout << "enter number of rows/columns";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
        */
    // 7. print odd number triangle.
    /*
    int n;
    cout << "enter number of rows/columns";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j % 2 != 0)
            {
                cout << j;
            }
        }
        cout << endl;
    }
        */
    // 8. print floyd's triangle.
    /*
    int n;
    cout << "enter number of rows/columns";
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
        */
    // 9. print star plus.
    /*
    int n;
    cout << "enter number of rows/columns";
    cin >> n;
    int mid = (n / 2) + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == mid || j == mid)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
        */

    // 10. print hollow rectangle of stars.
    /*
    int m, n;
    cout << "enter number of rows";
    cin >> m;
    cout << "enter number of columns";
    cin >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == m || j == n)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
        */
    // 11. print star cross.
    /*
    int n;
    cout << "enter number of rows/columns";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || i + j == n + 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
        */

    // 12. print reverse star triangle.
    //    *
    //  * *
}