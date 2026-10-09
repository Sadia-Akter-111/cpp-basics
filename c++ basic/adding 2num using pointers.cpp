#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    int *p1;
   int *p2;
    p1=&num1;
    p2=&num2;
   int  sum=*p1+*p2;
    cout<<sum;
}
