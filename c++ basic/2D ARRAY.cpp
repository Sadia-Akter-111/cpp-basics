#include<iostream>
using namespace std;
int main()
{
    int row ,col;
    int arr [2][3]= {{10,20,30},
                  {30,40,50}

                   };
for(row=0;row<2;row++)
{
    for(col=0;col<3;col++)
    {
        cout<< arr[row][col]<<" ";
    }
    cout<<endl;
}
}
