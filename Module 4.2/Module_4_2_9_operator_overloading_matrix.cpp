#include <iostream>
using namespace std;
class matrix
{
private:
    int a[5], b[5], c[5];

public:
    void inputData()
    {
        cout << "---------------------------------------------" << endl;
        cout << "Enter 5 value to store in matrix A : ";
        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
        }
        cout << "---------------------------------------------" << endl;
        cout << "Enter 5 value to store in matrix B : ";
        for (int i = 0; i < 5; i++)
        {
            cin >> b[i];
        }
        cout << "---------------------------------------------" << endl;
    }
    void display();
    void operator+();
};
void matrix::operator+()
{
    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
    }
}
void matrix::display()
{
    cout << "---------------------------------------------" << endl;
    cout << "The matrix A is : ";
    for (int i = 0; i < 5; i++)
    {
        cout << " " << a[i];
    }
    cout << endl
         << "---------------------------------------------" << endl;
    cout << endl
         << "The matrix B is : ";
    for (int i = 0; i < 5; i++)
    {
        cout << " " << b[i];
    }
    cout << endl
         << "---------------------------------------------" << endl;
    cout << endl
         << "The Addition of Matrix A and B is :";
    for (int i = 0; i < 5; i++)
    {
        cout << " " << c[i];
    }
    cout << endl
         << "---------------------------------------------" << endl;
}
int main()
{
    matrix obj;
    obj.inputData();
    +obj;
    obj.display();
    return 0;
}