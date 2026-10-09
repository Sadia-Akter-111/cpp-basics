#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int x,rem,reverse=0;
    cin>>x;
    while(x>0)
    {


      if(reverse>INT_MAX/10||reverse <INT_MIN/10)
      {
          return 0;
      }
        reverse=reverse*10+(x%10);
      x=x/10;
    }
    cout<<reverse;

}
