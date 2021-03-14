
// Employs sallary deduction fund Function.

// Deduction Rules

/* 1. If sallary is less than RS 10000 no deduction.
2. If sallary is equal to or more than RS 10000 and less than RS 20000 then deduct RS 1000 as Fund.
3. If sallary is equal to or more than RS 20000 then deduct 7% of the sallary for fund.  */

#include<iostream>

using namespace std;

int main()
{
    // Sallary input from the user.


    float sallary;
    cout<<"Enter the sallary: ";
    cin>>sallary;

    // Conditions for the deduction rules.

    if (sallary<10000)
    {
        cout<<"No deduction Fund"<<endl;
    }

    else if(sallary>=10000 && sallary<20000)
    {
        cout<<"The sallary is "<<sallary<<" so the deduction of RS 1000 is decucted as fund new sallary is: "<<sallary-1000<<endl;
    }

    else if(sallary>=20000)
    {
        cout<<"The sallary is "<<sallary<<" so the deduction of 7% is decucted as fund new sallary is: "<<sallary*0.7<<endl;
    }

    return 0;
}