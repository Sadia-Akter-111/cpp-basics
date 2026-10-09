#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int random;
    for(int i=1;i<=5;i++)
    {
        random=rand()%5+1;
        cout<<"randome number : "<<random<<endl;
    }
}
