#include<iostream>
using namespace std;
class friends
{
private:
 int a,b;
 friend int f1(friends);
};


int f1(friends x)
{
    cout<<"Enter the number A to find greatest number : ";
    cin>>x.a;
    cout<<"Enter the number B to find greatest number : ";
    cin>>x.b;
    if (x.a>x.b)
    {
        cout<<"A is Largest number which is ";
    }
    else
    {
        cout<<"B is Largest number which is ";
    }

    return x.a,x.b;
    
}
int main()
{
    friends obj;
    cout<<f1(obj);
    return 0;
}