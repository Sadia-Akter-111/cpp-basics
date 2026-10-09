#include<iostream>
using namespace std;
int main()
{
    int terms;
    cout<<"Enter number of terms:: ";
    cin>>terms;
    int a=0,b=1;
    for(int i=0;i<terms;i++)
    {
        cout<<a<<" ";
        int c=a+b;
        a=b;
        b=c;
    }

}
