// area of circle.
#include <iostream>
using namespace std;
int main()
{
    // int r = 5;
    // cout << "the area of this circle is ";
    // cout << 3.14 * r * r << endl;

    // 2. volume of sphere.
    // int r = 5;
    // cout << "the volume of sphere with radius 5 is ";
    // cout << (4 * 3.14 * r * r * r) / 3 << endl;

    // taking input from the user.
    /*
    int x;
    cout << "enter a number :";
    cin >> x;
    cout << "the square of this number is ";
    cout << x * x;
    */

    // check whether the given number is even or odd.
    /*
    int x;
    cout << "enter a number :";
    cin >> x;
    if (x % 2 == 0)
    {
        cout << "the given number is even";
    }
    else
    {
        cout << "the given number is odd"; }
    */

    // print the absolute value of an integer.
    // int x;
    // cout << "enter integer : ";
    // cin >> x;
    // if (x < 0)
    // {
    //     cout << -x;
    // }
    // else
    // {
    //     cout << x;
    // }

    // check if given three sides form a triangle.
    /*
    int x, y, z;
    cout << "enter x";
    cin >> x;
    cout << "enter y";
    cin >> y;
    cout << "enter z";
    cin >> z;
    if (x + y > z && x + z > y && y + z > x)
     cout << "x,y and z are measurement of sides of triangle";
*/

    // take three numbers and determine the smallest number.

    int x, y, z;
    cout << "enter x";
    cin >> x;
    cout << "enter y";
    cin >> y;
    cout << "enter z";
    cin >> z;
    if (x < y)
    {
        if (x < z)
            cout << x << " is smallest";
        else
            cout << z << " is smallest";
    }
    else
    {
        if (y < z)
            cout << y << " is smallest";
        else
            cout << z << " is smallest";
    }
}
