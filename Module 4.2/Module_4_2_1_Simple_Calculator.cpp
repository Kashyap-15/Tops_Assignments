#include <iostream>
using namespace std;
class calculator
{
private:
    float a, b, sum, sub, mul, div;

public:
    void paramters()
    {
        cout << "---------------------------------------------" << endl;
        cout << "Enter the value of A : ";
        cin >> a;
        cout << "---------------------------------------------" << endl;
        cout << "Enter the value of B : ";
        cin >> b;
        cout << "---------------------------------------------" << endl;
    }
    void function()
    {
        cout << "---------------------------------------------" << endl;
        sum = a + b;
        cout << "Sumation of A and B is : " << sum << endl;
        cout << "---------------------------------------------" << endl;
        sub = a - b;
        cout << "Substraction of A and B is : " << sub << endl;
        cout << "---------------------------------------------" << endl;
        mul = a * b;
        cout << "Multiplication of A and B is :" << mul << endl;
        cout << "---------------------------------------------" << endl;
        div = a / b;
        cout << "Division of A and B is : " << div << endl;
        cout << "---------------------------------------------" << endl;
    }
};
int main()
{
    calculator obj;
    obj.paramters();
    obj.function();
    return 0;
}