#include<iostream>
using namespace std;
class friends
{
private:
    int a,b;
    friend void f1(friends);
};
void f1(friends x)
{
    cout<<"Enter the number A  : ";
    cin>>x.a;
    cout<<"Enter the number B  : ";
    cin>>x.b;
    cout<<"before swapping A = "<<x.a<<endl;
    cout<<"before swapping b = "<<x.b<<endl;
    cout<<"After swapping A = "<<x.a*x.b/x.a<<endl;
    cout<<"After swappinf B ="<<x.b*x.a/x.b<<endl;
    
}
int main()
{
    friends obj;
    f1(obj);
    return 0;
}