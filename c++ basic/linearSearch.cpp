 #include<iostream>
 using namespace std;
 int main()
{
    int arr[100],n,target,pos=0;
    cout<<"Enter number of elements:: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a number do you want to search : ";
    cin>>target;
    for( int i=0;i<n;i++)
    {

        if(arr[i]==target)
        {
            cout<<"Found at "<<i+1<<" position";
            pos++;
            break;
        }
    }
    if(pos==0)
        cout<<"not found";
}
