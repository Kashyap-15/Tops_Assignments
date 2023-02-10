#include <iostream>
using namespace std;
class bankAccount
{
private:
    string name, account_type;
    long long int account_num, balance, deposite_cash, withdraw_cash;

public:
    void assign_value()
    {
        cout << "---------------------------------------------" << endl;
        cout << "Enter the name of account Holder : ";
        cin >> name;
        cout << "Enter the account Number : ";
        cin >> account_num;
        cout << "Enter the account Type : ";
        cin >> account_type;
        cout << "Enter the balance in the account : ";
        cin >> balance;
        cout << "---------------------------------------------" << endl;
    }
    void deposite_amount()
    {
        cout << "---------------------------------------------" << endl;
        cout << "Enter the amount to deposite : ";
        cin >> deposite_cash;
        balance = balance + deposite_cash;
        cout << "---------------------------------------------" << endl;
    }
    void withdraw()
    {
        cout << "---------------------------------------------" << endl;
        cout << "The balance in the Account is : " << balance << endl;
        cout << "Enter the amount to withdraw : ";
        cin >> withdraw_cash;
        balance = balance - withdraw_cash;
        cout << "---------------------------------------------" << endl;
    }
    void dispaly()
    {
        cout << "---------------------------------------------" << endl;
        cout << "Your name in the Account is : " << name << endl;
        cout << "Your Account Number is : " << account_num << endl;
        cout << "Your Account type is : " << account_type << endl;
        cout << "Your balance is : " << balance << endl;
        cout << "---------------------------------------------" << endl;
    }
};
int main()
{
    bankAccount obj;
    obj.assign_value();
    obj.deposite_amount();
    obj.withdraw();
    obj.dispaly();
    return 0;
}