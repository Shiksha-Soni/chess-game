#include <iostream>
using namespace std;
// 1. print n to 1 using recurrsion.
void print(int n)
{
    cout << n << endl;
    if (n <= 0)
        return;
    else
        print(n - 1);
}
int main()
{
    int n;
    cout << " enter number n";
    cin >> n;
    print(n);
}