#include<iostream>
using namespace std;
int main()
{
    int num,digit1,digit2;
    cin>>num;
        digit1=num%10;
        digit2=num/10;

    if(digit1%digit2==0||digit2%digit1==0)
        cout<<"YES";
    else
        cout<<"NO";
    }

