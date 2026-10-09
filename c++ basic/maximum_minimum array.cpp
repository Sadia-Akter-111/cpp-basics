
 #include<iostream>
 using namespace std;
 int main()
{
    int arr[100],n,max,min;
    cout<<"Enter number of elements:: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"Maximum= "<<max;
    min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<endl<<"Minimum= "<<min;


}
