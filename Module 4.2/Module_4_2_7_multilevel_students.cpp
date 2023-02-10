#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void input_student()
    {
        cout << "-----------------------------------------------------" << endl;
        cout << "enter your roll number : ";
        cin >> roll_no;
        cout << "-----------------------------------------------------" << endl;
    }
};
class test : public student
{
protected:
    int maths, science;

public:
    void input_test()
    {
        cout << "-----------------------------------------------------" << endl;
        cout << "Enter the marks obtain in Maths : ";
        cin >> maths;
        cout << "Enter the marks obtain in Science : ";
        cin >> science;
        cout << "-----------------------------------------------------" << endl;
    }
};
class result : public test
{
    int total_marks;

public:
    void input_result()
    {
        total_marks = maths + science;
    }
    void display()
    {
        cout << "-----------------------------------------------------" << endl;
        cout << "The given marks are the marks of Roll Number " << roll_no << "|||" << endl;
        cout << "The marks obtain in maths is : " << maths << endl;
        cout << "The marks obtain in science is : " << science << endl;
        cout << "Total marks obtain in the test is : " << total_marks << endl;
        cout << "-----------------------------------------------------" << endl;
    }
};
int main()
{
    result obj;
    obj.input_student();
    obj.input_test();
    obj.input_result();
    obj.display();
    return 0;
}