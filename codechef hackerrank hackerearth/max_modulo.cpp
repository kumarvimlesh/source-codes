#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    long long n,i;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    i=n-2;
    while(arr[i+1]==arr[i] && i>0){
        i--;
    }

    //cout<<arr[i]<<" "<<arr[n-1];
    cout<<arr[i]%arr[n-1];
 }
 return 0;
}
