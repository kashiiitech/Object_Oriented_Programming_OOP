
// Even and Odd function

//take input from the user and check whether the given number is Even or Odd.

#include<iostream>

using namespace std;

int main()
{
    // declaire variables and taking input from the user.
    int num;
    cout<<"Enter any Number: ";
    cin>>num;

    // Conditions used in the funcion.

    if(num%2==0)
    {
        cout<<num<<" is an Even number."<<endl;
    }

    else if(num%2!=0)
    {
        cout<<num<<" is an Odd number."<<endl;
    }

    return 0;
}