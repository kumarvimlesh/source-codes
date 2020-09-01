#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    long long n;
    cin>>n;
    long long arr[n],max=0,tmp=0;
    for(long long i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max)
            max=arr[i];
    }
    if(n==2){
        tmp=arr[0]>arr[1]?arr[1]:arr[0];
        cout<<tmp<<"\n";
    }
    else
        cout<<max<<"\n";
 }
}
