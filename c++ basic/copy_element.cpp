#include<iostream>
 using namespace std;
 int main()
{
    int arr[100],n,arr2[100];
    cout<<"Enter number of elements:: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Orginal elements: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        arr2[i]=arr[i];

    }
    cout<<endl<<"copying elements: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }
}
