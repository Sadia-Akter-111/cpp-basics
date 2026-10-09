#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a interger: ";
    cin>>num;
    if(num>0)
        cout<<"positive";
    else if(num<0)
        cout<<"Negative";
    else
        cout<<"zero";
}
