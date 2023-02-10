#include <iostream>
using namespace std;
class cricketer
{
protected:
    int total_run, avg_run;
    int total_match = 3, best_run = 400;
    string best_performer = "Kashyap";
    string name_batsman;

public:
    void name()
    {
        cout << "-----------------------------------------------------" << endl;
        cout << "The name of the batsman :";
        cin >> name_batsman;
    }
};
class batsman : public cricketer
{
protected:
    int first_run, second_run, third_run;

public:
    void input()
    {
        cout << "-----------------------------------------------------" << endl;
        cout << "Enter the The run you made in First match : ";
        cin >> first_run;
        cout << "Enter the The run you made in Second match : ";
        cin >> second_run;
        cout << "Enter the The run you made in Third match : ";
        cin >> third_run;
        cout << "-----------------------------------------------------" << endl;
    }

    void totalRun()
    {
        cout << "-----------------------------------------------------" << endl;
        total_run = first_run + second_run + third_run;
        cout << "The total Runs till now he made is : " << total_run << endl;
        cout << "-----------------------------------------------------" << endl;
    }
    void average()
    {
        cout << "-----------------------------------------------------" << endl;
        avg_run = first_run + second_run + third_run / total_match;
        cout << "The Avg Runs till now is : " << avg_run << endl;
        cout << "-----------------------------------------------------" << endl;
    }
    void display()
    {
        cout << "-----------------------------------------------------" << endl;
        cout << "The Name of the batsman is  : " << name_batsman << endl;
        cout << "The total Run of is : " << total_run << endl;
        cout << "The avge run of is : " << avg_run << endl;
        cout << "The best perforer is : " << best_performer << " with " << best_run << " Runs" << endl;
        cout << "-----------------------------------------------------" << endl;
    }
};
int main()
{
    batsman obj;
    obj.name();
    obj.input();
    obj.totalRun();
    obj.average();
    obj.display();
    return 0;
}