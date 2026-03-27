#include <iostream>
using namespace std;
int main()
{
    // 1 print 'hello world' n times.take n from the user.
    /*
    int n;
    cout << "entr number";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "hello world" << endl;
    }
        */
    // 2 print all the even numbers from one to hundred.
    /*
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    */

    // 3 display this GP- 1,2,4,8,16,32.... upon 'n' terms.
    /*
    int n;
    cout << "enter number ";
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a = a * 2;
    }
        */

    // 4 WAP to find the highest factor of a given number other than that nummber itself.
    /*
    int n;
    cout << "enter number";
    cin >> n;
    int a = 1;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            a = i;
    }
    cout << a << endl;
    */
    // BETTER PROGRAM
    /*
    int n;
    cout << "enter number";
    cin >> n;
    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            break;
        }
    }
        */
    // 5 print numbers from 1 to 20, skip 5 and 7.
    /*
    for (int i = 1; i <= 20; i++)
    {
        if (i == 5 || i == 7)
            continue;
        cout << i << endl;
    }
        */
    // 6 WAP to print odd numbers from 1 to 100 using continue.

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
            continue;
        cout << i << endl;
    }
}