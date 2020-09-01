#include<iostream>
using namespace std;
int count=0;
int partition(int min,int max,int *arr)
{
     int i,pivot,temp;
     pivot=arr[min];
     while(min<max)
     {
        while(arr[min]<pivot)
        {
            min++;
        }
        while(arr[max]>pivot)
        {
            max--;
        }
        if(min<max)
        {
        	count++;
            temp=arr[min];
            arr[min]=arr[max];
            arr[max]=temp;
        }
        else
        {
        	count++;
            temp=pivot;
            pivot=arr[min];
            arr[min]=temp;
            break;
        }
     }
     return min;
}

void quick(int min,int max,int *arr)
{
  int index,i;
  if(min<max)
  {
          index=partition(min,max,arr);
          quick(min,index-1,arr);
          quick(index+1,max,arr);
  }
}

int main()
{
	printf("*************\nVimlesh kumar\n171210059\n*************\n");
    int n,min,max,i;
    cout<<"\nEnter number of elements in the array:";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements of array: \n";
    for(i=0;i<n;i++)
    cin>>arr[i];
    max=n-1;
    min=0;
    quick(min,max,arr);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nnumber of swap : "<<count;
}
