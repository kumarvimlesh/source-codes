#include<iostream>
using namespace std;
int main(){
    long long n,m,max=0;
    cin>>n>>m;
    long long arr[n];
    for(long long i=1;i<=n;i++)
      arr[i]=0;
    while(m--){
        long long a,b,k;
        cin>>a>>b>>k;
        for(long long i=a;i<=b;i++){
             arr[i]+=k;
             if(arr[i]>max)
                max=arr[i];
        }
    }
    cout<<max;
    return 0;
}
