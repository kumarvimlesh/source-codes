#include<iostream>
using namespace std;
int min=0,max=0;
int maxmin(int arr[],int l,int r)
{
    if(l==r)
    {
    	min=arr[l];
    	max=arr[r];
    	cout<<"maximum"<<max;
    	cout<<"minimumn"<<min;
	}
	else(l<r)
	{
		max=a[l];
		min=a[r];
	}
	mid=(l+r)/2;
	maxmin(arr,l,mid);
	maxmin(arr,mid+1,r);
}

int main()
{
	int n;
	cout<<"enter the size of array : ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	maxmin(arr,0,n);
	return 0;
}
