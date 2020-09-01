#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,num=0,sum1=0,den=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    do
    {
        for(int i=0;i<n;i++)
        {
            if(i==0)
                sum1+=arr[i];
            else
               {
                   if(arr[i]>arr[i-1])
                    sum1+=arr[i]-arr[i-1];
                   else
                    sum1+=arr[i-1]-arr[i];
               }
                //cout<<"\n"<<arr[i]<<" ";
        }
        //cout<<"\nsum1 "<<sum1;
        //cout<<"\n";
        num+=sum1;
        //cout<<"\n"<<num;
        sum1=0;
        den++;
    }while(std::next_permutation(arr,arr+n));
    //cout<<"\n"<<num<<" "<<den;
    for(int i=den;i>0;i--)
    {
        if(num%i==0 and den%i==0)
        {
            num=num/i;
            den=den/i;
        }
    }
    cout<<"\n"<<num<<" "<<den;
    return 0;
}
