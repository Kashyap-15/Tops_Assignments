#include <iostream>
using namespace std;

class student
{
protected:
    float percentage;

public:
    void input_student()
    {
        cout << "-----------------------------------------------------" << endl;
        cout << "Enter the percentage of the student : ";
        cin >> percentage;
        cout << "-----------------------------------------------------" << endl;
    }
};
class teacher
{
protected:
    int salary;

public:
    void input_teacher()
    {
        cout << "-----------------------------------------------------" << endl;
        cout << "Enter the salary of the teacher : ";
        cin >> salary;
        cout << "-----------------------------------------------------" << endl;
    }
};
class person : public student, public teacher
{
private:
    string name, name_std, name_teacher;
    int age, age_std, age_teacher;

public:
    void input_person()
    {
        cout << "-----------------------------------------------------" << endl;
        cout << "Enter the name of the person : ";
        cin >> name;
        cout << "Enter the age of the person : ";
        cin >> age;
        cout << "-----------------------------------------------------" << endl;
        cout << "Enter the name of the student : ";
        cin >> name_std;
        cout << "Enter the age of the student : ";
        cin >> age_std;
        cout << "-----------------------------------------------------" << endl;
        cout << "Enter the name of the teacher : ";
        cin >> name_teacher;
        cout << "Enter the age of the teacher : ";
        cin >> age_teacher;
        cout << "-----------------------------------------------------" << endl;
    }
    void display()
    {
        cout << "-----------------------------------------------------" << endl;
        cout << "The name of the person is " << name << endl;
        cout << "The age of " << name << " is : " << age << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << "The name of the student is " << name_std << endl;
        cout << "The age of " << name_std << " is : " << age_std << endl;
        cout << "The percetage of the student is : " << percentage << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << "The name of the teacher is " << name_teacher << endl;
        cout << "The age of " << name_teacher << " is : " << age_teacher << endl;
        cout << "The salary of the teacher is : " << salary << endl;
        cout << "-----------------------------------------------------" << endl;
    }
};
int main()
{
    person obj;
    obj.input_person();
    obj.input_student();
    obj.input_teacher();
    obj.display();
    return 0;
}