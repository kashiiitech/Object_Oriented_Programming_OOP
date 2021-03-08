//  Any integer is input by the user. Write a program to find out whether it is an odd number or even number. 

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter any Num: ";
    cin>>num;
   

    if (num%2==0)   // if the number is divided by 2 and the remainder is zero than it is an even number.
    {
        
        cout<<"It is an even number."<<endl;
    }
    else if (num%2!=0)     // if the number divided by 2, and the remainder is not equal to zero than it is odd number.
    {
        cout<<"It is an odd number."<<endl;
    }
    return 0;
} 