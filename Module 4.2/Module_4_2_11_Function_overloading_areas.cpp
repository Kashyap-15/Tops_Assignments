#include <iostream>
using namespace std;
#define PI 3.14
class areOfshapes
{
    double area;
public:
    void areaof(int lenght, int breadth)
    {
        cout << "---------------------------------------------" << endl;
        area = lenght * breadth;
        cout << "The area of ractangle is :" << area<<endl;
        cout << "---------------------------------------------" << endl;
    }

    void areaof(double lenght_triangle, double base)
    {
        cout << "---------------------------------------------" << endl;
        area = 0.5 * lenght_triangle * base;
        cout << "The area of triangle is : " << area<<endl;
        cout << "---------------------------------------------" << endl;
    }

    void areaof(double radius)
    {
        cout << "---------------------------------------------" << endl;
        area = radius * radius * PI;
        cout << "The area of circle is : " << area<<endl;
        cout << "---------------------------------------------" << endl;
    }
};
int main()
{
    areOfshapes obj;
    obj.areaof(2, 4);
    obj.areaof(3.2, 5.4);
    obj.areaof(15.3);
    return 0;
}