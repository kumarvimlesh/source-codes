#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,j=0,count=0,temp=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr, arr+n);
        while((arr[j]==arr[j+1] || arr[j]==arr[j-1]) && j<n)
            {
                temp++;
                //cout<<temp<<"while\n";
                if(temp==k && arr[j]!=arr[j+1])
                 {
                   count++;
                  // cout<<count<<" "<<temp<<"if\n";
                   temp=0;
                  }
                  j=j+1;
                  //cout<<j<<"j\n";
            }
    cout<<count;
    return 0;
}
