// Write a program to calculate the total expenses. Quantity and price per item are input by the user and discount of 10% is offered if the expense is more than 5000.

#include<iostream>

using namespace std;

int main()

{
    float total_expense;
    int Quantity;
    float price;
    int discount;

    cout<<"Enter the quantity : ";
    cin>>Quantity;
    cout<<"Enter the price: ";
    cin>>price;

    total_expense = Quantity*price;

    if(total_expense>5000)
    {
        discount = (total_expense*0.1);
        total_expense = total_expense-discount;
    }

    cout<<"The total expense is RS: "<<total_expense<<endl;


    return 0;
}