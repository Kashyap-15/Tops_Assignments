#include <iostream>
using namespace std;
template <class t>
void swapping(t a, t b, t temp)
{
    cout << "---------------------------------------------" << endl;
    cout << "Before swapping :" << endl;
    cout << " A --> " << a << " And "<< " B --> " << b << endl;
    cout << "---------------------------------------------" << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "---------------------------------------------" << endl;
    cout << "After swapping :" << endl;
    cout << " A --> " << a << " And "<< " B --> " << b << endl;
    cout << "---------------------------------------------" << endl;
}
int main()
{
    int a, b;
    int temp = 0;
    cout << "---------------------------------------------" << endl;
    cout << "Enter 2 number to swap them : " << endl;
    cin >> a >> b;
    cout << "---------------------------------------------" << endl;
    swapping(a, b, temp);
    return 0;
}