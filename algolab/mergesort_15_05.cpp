#include<iostream>
using namespace std;
int merge(int arr[],int low,int mid,int high)
{
    int ar[high-low+1];
    int i=low,j=mid+1,k=low;
    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
            ar[k++]=arr[i++];
        else
            ar[k++]=arr[j++];
    }
    if(i==mid && j<high)
    {
        while(j<=high)
        {
            ar[k++]=arr[j++];
        }
    }
    else if(i<mid && j==high)
    {
        while(i<=mid)
        {
            ar[k++]=arr[i++];
        }
    }
    for(int i=low;i<k;i++)
    {
        arr[i]=ar[i];
    }
}
int mergesort(int arr[],int low, int high)
{
    int mid;
    while(low<high)
    {
        mid=(low+high-1)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main()
{
    int n;
    cout<<"size : ";
    cin>>n;
    int arr[n];
    cout<<"insert element in array : \n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i];
    return 0;
}
