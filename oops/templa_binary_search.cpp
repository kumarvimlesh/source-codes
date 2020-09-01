#include<bits/stdc++.h>
using namespace std;
template<class T>
void binary_search(T *arr,int n)
{
    char op;
    do
    {
        T m;
    int first=0,last=n-1,mid;
    cout<<"Enter the element to be search : ";
	cin>>m;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(arr[mid]<m)
           first=mid+1;
        else if(arr[mid]==m)
        {
           cout<<"Found !\nElement is present at index value : "<<mid+1<<"\n";
           break;
        }
       else
        last=mid-1;
        mid=(first+last)/2;
    }
  if(first>last)
    cout<<"Not Found !\n";
 cout<<"Search another element => y or n : ";
 cin>>op;
    }while(op=='y');
}
int main()
{
    cout<<"*************\nVimlesh kumar\n171210059\n*************\n";
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
//    int arr[n];//integer type
    char arr[n];//character type
    cout<<"Insert the elements in array : \n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    cout<<"Sorted Array : \n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<"\n";
    binary_search(arr,n);
    return 0;
}

