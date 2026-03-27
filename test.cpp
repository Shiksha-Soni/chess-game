#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int N, x = 1, y = 0;
        cin >> N;
        string S;
        cin >> S;
        // for (int j = 0; j < N; j++)
        // {
        //     if (S[j] == '0')
        //     {
        //         for (; (j + x) < N; x++)
        //         {
        //             if (S[j + x] == '1')
        //             {
        //                 y = y + 1;
        //             }
        //         }
        //     }
        // }
        for (int i = 0; i < N; i++)
        {
            if (S[i] == '0')
                for (; i < N; i++)
                {
                    if (S[i] == '1')
                        y++;
                }
        }
        cout << y << endl;
        ;
    }
}
