#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter two integer: ";
    cin>>num1>>num2;
    if(num1>num2)
        cout<<"Large number is: "<<num1;
    else if(num1<num2)
        cout<<"Large number is : "<<num2;
    else
        cout<<"Equal";
}
