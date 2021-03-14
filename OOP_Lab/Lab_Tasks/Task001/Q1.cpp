//  A simple calculator

// take two inputs from the user and perform the addition, subtraction, division, multiplication operations.

#include<iostream>

using namespace std;

int main()
{
    // define variables and take input from the user.
    float x,y;
    char option;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    cout<<"1.+\n2.-\n3./\n4.*"<<endl;
    cout<<"select the operation: ";
    cin>>option;

    // Conditions used in the calculator.

    if(option=='+' || option=='1')
                {
                    cout<<"The addition of "<<x<<" and "<<y<<" is: "<<x+y;
                }

    else if(option=='-' || option=='2')
                {
                    cout<<"The subtraction of "<<x<<" and "<<y<<" is: "<<x-y;
                }
    
    else if(option=='/' || option=='3')
                {
                    cout<<"The division of "<<x<<" and "<<y<<" is: "<<x/y;
                }

    else if(option=='*' || option=='4')
                {
                    cout<<"The multiplication of "<<x<<" and "<<y<<" is: "<<x*y;
                }

    return 0;   
}
