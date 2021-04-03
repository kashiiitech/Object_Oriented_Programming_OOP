// The programe to convert the fahereint temperature to centigrade temperature. Take input from the user.

// The formula for the conversion is C = (F-32)*5/9

#include<iostream>

using namespace std;

int main()
{

    float fah,cent;
    cout<<"\nEnter your temperature in Fahreint: ";
    cin>>fah;

    cent = (fah-32)*0.555;

    cout<<"The temperature in centigrade is: "<<cent;


    return 0;
}