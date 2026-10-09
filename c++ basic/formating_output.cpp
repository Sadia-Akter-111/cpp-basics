
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float num1,num2;
    cout<<"Enter 2 numbers:: ";
    cin>>num1>>num2;
    cout<<showpoint;// showpoint → Always shows decimal point and trailing zeros
                   // Example: 10.0 → 1
    cout<<fixed;  // fixed + setprecision(n) → shows n digits after the decimal point
    cout<<setprecision(3);// setprecision(n) → controls the number of digits displayed

    float sum=num1+num2;
    cout<<setw(15)<<"Sum= "<<sum<<endl;
  //  cout<<noshowpoint;// noshowpoint → Hides unnecessary decimal point and trailing zeros
                     // Example: 10.0 → 10
    float sub=num1-num2;
    cout<<setw(20)<<"Subtraction= "<<sub<<endl;

    float m=num1*num2;
    cout<<setw(22)<<"multiplication= "<<m<<endl;

    float d=(float)num1/num2;
    cout<<setw(15)<<"Division= "<<d<<endl;// setw(n) → sets the width of the output field
    // rem=num1%num2;
   // cout<<"Remainder= "<<rem<<endl;
}
