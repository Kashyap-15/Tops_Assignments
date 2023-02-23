#include <iostream>
#include <cmath>        //used this library to use ceil in programme
#include <conio.h>
using namespace std;
class input     //created one class for inout the data from user
{
protected:      // used protected because we wwant to inherite that in the child class
    string event_name, first_name, last_name;
    int noOfguest, minutes;

public:
    void display()
    {
        cout << "------------------------Event Management System------------------------" << endl;  //input of general information
        cout << "Enter the name of the Event : ";
        cin >> event_name;
        cout << "Enter customer's first name :  ";
        cin >> first_name;
        cout << "Enter customer's last name : ";
        cin >> last_name;
        cout << "Enter the number of guest : ";
        cin >> noOfguest;
        cout << "Enter the number of minutes in the even : ";
        cin >> minutes;
        cout << "-------------" << event_name << " Estimation for : " << first_name << " " << last_name << "---------------" << endl;
    }
};
class event : public input          // inherited the input class in event class
{
private:
    const double CostPerHour = 18.50;   //took const because this value is fixed (cannot be chnaged)
    const double CostPerMinute = 0.40;
    const double CostOfDinner = 20.70;
    int noOfserver;
    double costforoneserver, cost1, cost2, totalfoodcost, avgcost, totalcost, deposite;

public:
    void numberOfserver()   //made different function for diiferent calculations
    {
        noOfserver = noOfguest / 20;
        cout << "----------------------------------------------------------------" << endl;
        cout << "Number of server : " << ceil(noOfserver) << endl;  //used ceil to round of the number because servers cannot be in fraction
    }
    void costOfserver()
    {
        cost1 = (minutes / 60) * CostPerHour;
        cost2 = (minutes % 60) * CostPerMinute;
        costforoneserver = cost1 + cost2;
        cout << "The cost of a server is : " << costforoneserver << endl;
    }
    void costoffood()
    {
        totalfoodcost = noOfguest * CostOfDinner;
        cout << "The cost for food is : " << totalfoodcost << endl;
    }
    void avgcost_perperson()
    {
        avgcost = totalfoodcost / noOfguest;
        cout << "Average cost per person : " << avgcost << endl;
    }
    void totalcostofevent()
    {
        totalcost = totalfoodcost + (costforoneserver * noOfserver);
        cout << "Total cost is : " << totalcost << endl;
        cout << "----------------------------------------------------------------" << endl;
    }
    void dipositemoney()
    {
        deposite = totalcost * 0.25;
        cout << "----------------------------------------------------------------" << endl;
        cout << "Please deposite 25%"
             << " of total cost to reserv the event " << endl;
        cout << "The deposite needed is : " << deposite << endl;
        cout << "----------------------------------------------------------------" << endl;
    }
};
int main()
{
    int repeat;
    event obj;      // object specifier for child class event
    do
    {
        obj.display();  //calling to the functions
        obj.numberOfserver();
        obj.costOfserver();
        obj.costoffood();
        obj.avgcost_perperson();
        obj.totalcostofevent();
        obj.dipositemoney();
        cout << "----------------------------------------------------------------" << endl;
        cout << "Do you want to another budget?" << endl;
        cout << "press 1 for yes" << endl;
        cout << "Press 2 for no " << endl;
        cout << "----------------------------------------------------------------" << endl;
        cin >> repeat;
    } while (repeat == 1);  // used do while loop if the customer wants another budget from the programme
    cout << "----------The process is completed----------" << endl; // completion sentence so that customer knows that the proccess is over
    getch();
    return 0;
}