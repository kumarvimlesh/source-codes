#include<iostream>
using namespace std;
int main()
{
	cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
  	int n,j,temp=0,index,min=0,count=0,comp=0;
  	cout<<"enter the size of array : ";
  	cin>>n;
  	int arr[n];
  	cout<<"enter the elements in the array\n";
  	for(int i=0;i<n;i++)
  	  {
  		  cin>>arr[i];
	  }

	  for(int i=0;i<n;i++)
	  {

	    count=0;
	  	temp=arr[i];
	  	index=i;
	  	for(int j=i;j<n;j++)
	  	{
	  		if(arr[j]<arr[index])
	  		  {
	  			index=j;
	  			count++;
			  }
		}
		comp=comp+count;
		arr[i]=arr[index];
		arr[index]=temp;
	  }
	  cout<<"Sorted array is\n";
	  for(int i=0;i<n;i++)
  		  cout<<arr[i]<<" ";
	    cout<<"\nnumber of comp: "<<comp;
	  return 0;
}
