#include <iostream>
using namespace std;
class items
{
private:
    int pizza_input, noofpizza, burger_input, noofburger, sandwich_input, noofsandwich, rolls_input, noofrolls, biryani_input, noofbiryani;
    int p1, p2, p3, b1, b2, b3, s1, s2, s3, r1, r2, r3, bi1, bi2, bi3;
    int total_pizza = 0, total_burger = 0, total_sandwich = 0, total_rolls = 0, total_biryani = 0, total_bill = 0;

public:
    void pizza()
    {
        cout << "-----------------------Pizzas---------------------" << endl;
        cout << "1) Chess burst Pizza -- 300 " << endl;
        cout << "2) Thin Crust Pizza -- 250" << endl;
        cout << "3) Vegetable Pizza -- 200 " << endl;
        cout << "---------------------------------------------------------" << endl;
        cout << "Please enter which pizza would you like to have? : ";
        cin >> pizza_input;
        cout << "Please enter the quantity for pizzas : ";
        cin >> noofpizza;
        if (pizza_input == 1)
        {
            p1 = 300 * noofpizza;
            total_pizza += p1;
        }
        else if (pizza_input == 2)
        {
            p2 = 250 * noofpizza;
            total_pizza += p2;
        }
        else if (pizza_input == 3)
        {
            p3 = 200 * noofpizza;
            total_pizza += p3;
        }
    }
    void burger()
    {
        cout << "-----------------------Burgers---------------------" << endl;
        cout << "1) Chess Burger -- 150" << endl;
        cout << "2) Allo tikki Burger -- 50 " << endl;
        cout << "3) Maharaja Burger -- 200 " << endl;
        cout << "---------------------------------------------------------" << endl;
        cout << "Please enter which burger would you like to have? : ";
        cin >> burger_input;
        cout << "Please enter the quantity for burger : ";
        cin >> noofburger;
        if (burger_input == 1)
        {
            b1 = 150 * noofburger;
            total_burger += b1;
        }
        else if (burger_input == 2)
        {
            b2 = 50 * noofburger;
            total_burger += b2;
        }
        else if (burger_input == 3)
        {
            b3 = 200 * noofburger;
            total_burger += b3;
        }
    }
    void sandwich()
    {
        cout << "-----------------------Sandwich---------------------" << endl;
        cout << "1) Grill Sandwich -- 100 " << endl;
        cout << "2) Italian Sandwich -- 150 " << endl;
        cout << "3) Veg. Chess Grill Sandwich -- 150 " << endl;
        cout << "---------------------------------------------------------" << endl;
        cout << "Please enter which sandwich would you like to have? : ";
        cin >> sandwich_input;
        cout << "Please enter the quantity for sandwich : ";
        cin >> noofsandwich;
        if (sandwich_input == 1)
        {
            s1 = 100 * noofsandwich;
            total_sandwich += s1;
        }
        else if (sandwich_input == 2)
        {
            s2 = 150 * noofsandwich;
            total_sandwich += s2;
        }
        else if (sandwich_input == 3)
        {
            s3 = 150 * noofsandwich;
            total_sandwich += s3;
        }
    }
    void rolls()
    {
        cout << "-----------------------Rolls---------------------" << endl;
        cout << "1) Indian Rolls -- 100 " << endl;
        cout << "2) Maxican Rolls -- 150 " << endl;
        cout << "3) Mayo Rolls -- 100 " << endl;
        cout << "---------------------------------------------------------" << endl;
        cout << "Please enter which rolls would you like to have? : ";
        cin >> rolls_input;
        cout << "Please enter the quantity for rolls : ";
        cin >> noofrolls;
        if (rolls_input == 1)
        {
            r1 = 100 * noofrolls;
            total_rolls += r1;
        }
        else if (rolls_input == 2)
        {
            r1 = 150 * noofrolls;
            total_rolls += r2;
        }
        else if (rolls_input == 3)
        {
            r3 = 100 * noofrolls;
            total_rolls += r3;
        }
    }
    void biryani()
    {
        cout << "-----------------------biryani---------------------" << endl;
        cout << "1) Vegetable Biryani -- 200 " << endl;
        cout << "2) Mysore Bityani -- 250 " << endl;
        cout << "3) Plain Rice Biryani -- 150 " << endl;
        cout << "---------------------------------------------------------" << endl;
        cout << "Please enter which biryani would you like to have? : ";
        cin >> biryani_input;
        cout << "Please enter the quantity for pizzas : ";
        cin >> noofbiryani;
        if (biryani_input == 1)
        {
            bi1 = 200 * noofbiryani;
            total_biryani += bi1;
        }
        else if (biryani_input == 2)
        {
            bi2 = 250 * noofbiryani;
            total_biryani += bi2;
        }
        else if (biryani_input == 3)
        {
            bi3 = 150 * noofbiryani;
            total_biryani += bi3;
        }
    }
    void bill()
    {
        total_bill = total_pizza + total_burger + total_sandwich + total_rolls + total_biryani;
        cout << "YOur total bill is : " << total_bill << endl;
    }
};
int main()
{
    items obj;
    string name;
    int menu_choice, repeat;
    cout << "-----------------------Fast Food Center---------------------" << endl;
    cout << "Please enter your Name : ";
    cin >> name;
    cout << "Hello " << name << endl;

    cout << "What Would you like to order Mr/Miss " << name << endl;
here:
    cout << "-----------------------Menu---------------------" << endl;
    cout << "1) Pizza " << endl;
    cout << "2) Burger " << endl;
    cout << "3) Sandwich " << endl;
    cout << "4) Rolls " << endl;
    cout << "5) Biryani " << endl;
    cout << "0) TO get the bill" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "Please enter your Choice : ";
    cin >> menu_choice;
    switch (menu_choice)
    {
    case 1:
        obj.pizza();
        break;

    case 2:
        obj.burger();
        break;
    case 3:
        obj.sandwich();
        break;
    case 4:
        obj.rolls();
        break;
    case 5:
        obj.biryani();
        break;

    case 0:
        obj.bill();
        break;

    default:
        cout << "Invalid Input" << endl;
        break;
    }
    cout << "Do you want to order somwething else? (1 For YES/2 For NO) :";
    cin >> repeat;
    if (repeat == 1)
    {
        goto here;
    }
    else
    {
        cout << "---------------------------------------------------------" << endl;
        obj.bill();
        cout << "---------------------------------------------------------" << endl;
        cout << " : The Process is completed : " << endl;
        cout << "---------------------------------------------------------" << endl;
    }
    return 0;
}