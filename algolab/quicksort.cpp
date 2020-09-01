#include<iostream>
using namespace std;
int comp=0;
int partition(int arr[],int beg,int end)
{
	comp++;
	int small,i,temp,pivot;
	pivot=arr[end];
	small=beg-1;
	for(i=beg;i<end;i++)
	{
		if(arr[i]<pivot)
		{
			small++;
			temp=arr[small];
			arr[small]=arr[i];
			arr[i]=temp;
		}
	}
	small++;
	temp=arr[small];
	arr[small]=arr[end];
	arr[end]=temp;
	return small;
}

void quicksort(int arr[],int beg,int end)
{
	int pi;
	if(beg<end)
	{
	pi=partition(arr,beg,end);
	quicksort(arr,beg,pi-1);
	quicksort(arr,pi+1,end);
	}
}

int main()
{
    cout<<"*************\nVimlesh kumar\n171210059\n*************\n";
	int n,i;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];
	cout<<"Input array elements : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	quicksort(arr,0,n-1);
	cout<<"Sorted array : ";
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\nNumber of times partition is called : "<<comp;
}

