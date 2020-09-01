#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    long long arr[60],n;
    long long ans=0;
    arr[1]=0;
    arr[2]=1;
    for(int i=3;i<=60;i++){
        arr[i]=(arr[i-1]+arr[i-2])%10;
        //cout<< arr[i]<<" ";
    }
    for(int i=1;i<=60;i++){
        arr[i]%=10;
    }
    cin>>n;
    cout<<"n="<<n<<"log2(n)"<<(long long)log2(n)<<"\n";
    ans=pow((long long)2,(long long)log2(n));
   // cout<<"index="<<ans<<"\n";
        cout<<arr[ans%60]<<"\n";
 }
 return 0;
}
