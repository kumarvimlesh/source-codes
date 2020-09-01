#include<iostream>
using namespace std;
int main()
{
	cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
  	int n,j,temp=0;
  	cout<<"enter the size of array : ";
  	cin>>n;
  	int arr[n];
  	cout<<"enter the elements in the array\n";
  	for(int i=0;i<n;i++)
  		  cin>>arr[i];
	  for(int i=0;i<n;i++)
	{
		for(int j=i;j>0;j--)
		{
			if(arr[j]<arr[j-1])
			{
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}
	}
      cout<<"your sorted array is:\n";
	for(int i=0;i<n;i++)
  		  cout<<arr[i]<<" ";
	return 0;
}
