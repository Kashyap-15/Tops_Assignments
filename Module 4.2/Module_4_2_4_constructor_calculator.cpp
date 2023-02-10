#include <iostream>
using namespace std;
class calculator
{
private:
    int a, b;

public:
    calculator(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "---------------------------------------------" << endl;
        cout << "Value A is " << a << " and value B is " << b << endl;
    }
    void summation()
    {
        cout << "---------------------------------------------" << endl;
        int sum = a + b;
        cout << "Summation of " << a << " And " << b << " is : " << sum << endl;
    }
    void substraction()
    {
        cout << "---------------------------------------------" << endl;
        int sub = a - b;
        cout << "Substraction of " << a << " And " << b << " is : " << sub << endl;
    }
    void multiplication()
    {
        cout << "---------------------------------------------" << endl;
        int mul = a * b;
        cout << "Multiplication of " << a << " And " << b << " is : " << mul << endl;
    }
    void division()
    {
        cout << "---------------------------------------------" << endl;
        float div = (float)a / b;
        cout << "Division of " << a << " And " << b << " is : " << div << endl;
        cout << "---------------------------------------------" << endl;
    }
};
int main()
{
    calculator obj(20, 50);
    obj.display();
    obj.summation();
    obj.substraction();
    obj.multiplication();
    obj.division();
    return 0;
}