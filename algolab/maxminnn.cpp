#include<iostream>
using namespace std;
int maximum(int arr[],int i,int j)
{
    int max;
    if(i>j-2)
    {
        if(arr[i]>arr[i+1])
        {
            return arr[i];
        }
        else
        {
            return arr[i+1];
        }
    }
    max=maximum(arr,i+1,j);
    if(arr[i]>max)
    {
        return arr[i];
    }
    else
    {
        return max;
    }
}
int minimum(int arr[],int i,int j)
{
    int min;
    if(i>j-2)
    {
        if(arr[i]<arr[i+1])
        {
            return arr[i];
        }
        else
        {
            return arr[i+1];
        }
    }
    min=minimum(arr,i+1,j);
    if(arr[i]<min)
    {
        return arr[i];
    }
    else
    {
        return min;
    }
}

int main()
{
    cout<<"*************\nVimlesh kumar\n171210059\n*************\n";
    int n,i,max=0,min=0;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in the array : ";
    for(i=0;i<n;i++)
        cin>>arr[i];
    max=maximum(arr,0,n-1);
    min=minimum(arr,0,n-1);
    cout<<"Maximum : "<<max<<"\n";
    cout<<"Minimum : "<<min;
    return 0;
}
