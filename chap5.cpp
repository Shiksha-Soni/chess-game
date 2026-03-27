#include <iostream>
using namespace std;

// 1. pascal's triangle.
/*
int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
int main()
{
    int n;
    cout << "enter number of rows";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a = fact(i);
        for (int j = 0; j <= i; j++)
        {
            int b = fact(j);
            int c = fact(i - j);
            cout << a / (b * c);
        }
        cout << endl;
    }
}
    */
// 2. swap two numbers.
int main()
{
    int x = 2;
    int y = 5;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << x << endl
         << y;
}
