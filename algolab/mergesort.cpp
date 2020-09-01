#include<iostream>
#include<math.h>
using namespace std;
int count=0;
 void merge(int arr[], int l, int m, int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for (i=0;i<n1;i++)
        L[i]=arr[l+i];
    for (j=0;j<n2;j++)
        R[j]=arr[m+1+j];
    i=0;
    j=0;
    k=l;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        count++;
        mergeSort(arr,m+1,r);
        count++;
        merge(arr,l,m,r);
    }
}
int main()
{
    cout<<"*************\nVimlesh kumar\n171210059\n*************\n";
    int n,sum=0;
    cout<<"enter the size of array : ";
    cin>>n;
	int arr[n];
	cout<<"pass element in to the array\n";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	mergeSort(arr,0,n-1);
    cout<<"\nSorted array is \n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
     cout<<"\nnumber of comparison is : "<<count;
    return 0;
}
