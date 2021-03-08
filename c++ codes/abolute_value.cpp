// The function take input from the user and find the absolute number of the given number.

#include<iostream>
using namespace std;

int main()
{
    int num;     // the variable declaire.

    cout<<"Enter any number : ";  // just to show the msg on the screen

    cin>>num;     // input from the user
    
    
    if(num>=0)   // here we check the number if it is zero or greater than the zero the absolute number will be the same number.
    {
        cout<<"The absolute value is: "<<num<<endl;
    }

    else if(num<0)    // here we check if the number is less than zero means negative numbers than simply multiply that number with -1.
    {
        cout<<"The absolute value is: "<<-(num)<<endl;
    }


    return 0;
}