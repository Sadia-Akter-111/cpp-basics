 #include<iostream>
 using namespace std;
 int main()
{
    int arr[100],n,sum=0;
    cout<<"Enter number of elements:: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements are : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        sum=sum+arr[i];
    }
    cout<<endl;
    float avg=float(sum)/n;
    cout<<"Sum= "<<sum<<endl<<"Average= "<<avg;
}
