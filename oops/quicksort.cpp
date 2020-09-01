#include<iostream>
using namespace std;
int partition(int arr[],int low,int high)
{
    int i=low,j=high,pivot=low,temp;
    while(i<j)
    {
        while(arr[i]<arr[pivot])
        {
            i++;
        }
        while(arr[j]>arr[pivot])
        {
            j--;
        }
        if(arr[i]>arr[j])
        {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    temp=arr[pivot];
    arr[pivot]=arr[j];
    arr[j]=temp;
    return(j);
}
int  quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pivot=partition(arr,low,high);
        quicksort(arr,low,pivot-1);
        quicksort(arr,pivot+1,high);
    }
}
int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    cout<<"insert element in the array : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
