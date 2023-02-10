#include <iostream>
using namespace std;
template <class t>
void sorting(t a)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "---------------------------------------------" << endl;
    cout << "The array in ascending order is : ";
    for (int i = 0; i < 5; i++)
    {
        cout << a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << endl
         << "---------------------------------------------" << endl;
    cout << "The array in descending order is : ";
    for (int i = 0; i < 5; i++)
    {
        cout << a[i];
    }
    cout << endl
         << "---------------------------------------------";
}
int main()
{
    int a[5];
    cout << "---------------------------------------------" << endl;
    cout << "Enter 5 numbers to add in array : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    sorting(a);
    return 0;
}