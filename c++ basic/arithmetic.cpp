#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter 2 numbers:: ";
    cin>>num1>>num2;
    int sum=num1+num2;
    cout<<"Sum= "<<sum<<endl;
    int sub=num1-num2;
    cout<<"Subtraction= "<<sub<<endl;

    int m=num1*num2;
    cout<<"multiplication= "<<m<<endl;

    float d=(float)num1/num2;
    cout<<"Division= "<<d<<endl;
     int rem=num1%num2;
    cout<<"Remainder= "<<rem<<endl;
}
