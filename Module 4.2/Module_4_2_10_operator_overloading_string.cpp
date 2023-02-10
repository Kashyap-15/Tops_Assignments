#include <iostream>
using namespace std;
class concatstr
{
private:
    string a, b, c;

public:
    void inputData()
    {
        cout << "---------------------------------------------" << endl;
        cout << "Enter you name : ";
        cin >> a;
        cout << "---------------------------------------------" << endl;
        cout << "enter your surname : ";
        cin >> b;
        cout << "---------------------------------------------" << endl;
    }
    void operator+();
    void display();
};
void concatstr::operator+()
{
    c = a + b;
}
void concatstr::display()
{
    cout << "---------------------------------------------" << endl;
    cout << "Your full name is :" << c << endl;
    cout << "---------------------------------------------" << endl;
}
int main()
{
    concatstr obj;
    obj.inputData();
    +obj;
    obj.display();
    return 0;
}