#include <iostream>
using namespace std;
inline void multi()
{
    int a, b, c;
    cout << "-----------------------------------------------------" << endl;
    cout << "Enter 2 value to multiply them : ";
    cin >> a >> b;
    cout << "---------------------------------------------" << endl;
    c = a * b;
    cout << "Multiplication of " << a << " and " << b << " are : " << c << endl;
    cout << "-----------------------------------------------------" << endl;
}
inline void cube()
{
    int x, y;
    cout << "-----------------------------------------------------" << endl;
    cout << "Enter 1 value to find the cube of it : ";
    cin >> x;
    y = x * x * x;
    cout << "---------------------------------------------" << endl;
    cout << "The cybe of " << x << " is : " << y << endl;
    cout << "-----------------------------------------------------" << endl;
}
int main()
{
    multi();
    cube();
    return 0;
}