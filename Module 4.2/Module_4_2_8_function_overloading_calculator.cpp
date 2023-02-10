#include <iostream>
using namespace std;
class overloading
{
public:
    void calculation(double a, double b)
    {
        cout << "---------------------------------------------------------" << endl;
        cout << "Summation of " << a << " and " << b << " is : " << a + b << endl;
        cout << "---------------------------------------------------------" << endl;
    }
    void calculation(float a, float b)
    {
        cout << "---------------------------------------------------------" << endl;
        cout << "Substraction of " << a << " and " << b << " is : " << a - b << endl;
        cout << "---------------------------------------------------------" << endl;
    }
    void calculation(int a, int b)
    {
        cout << "---------------------------------------------------------" << endl;
        cout << "Divion of " << a << " and " << b << " is : " << (float)a / b << endl;
        cout << "---------------------------------------------------------" << endl;
    }
    void calculation(int a, int b, int c)
    {
        cout << "---------------------------------------------------------" << endl;
        cout << "Multiplication of " << a << " and " << b << " is : " << a * b * c << endl;
        cout << "---------------------------------------------------------" << endl;
    }
};
int main()
{
    overloading obj;
    obj.calculation(3.2, 6.1);
    obj.calculation(2.7, 1.7);
    obj.calculation(50, 70);
    obj.calculation(10, 20, 30);
    return 0;
}