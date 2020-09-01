#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
ll isprime(ll j){
 for(ll i=2;i<=sqrt(j);i++){
    if(j%i==0){
        return 0;
    }
 }
 return 1;
}
int main(){
 int t;
 cin>>t;
 while(t--){
    ll m,n,prime_sum=0,ans=0;
    cin>>m>>n;
    for(ll i=m;i<=n;i++){
       for(ll j=2;j<=i;j++){
            ll temp=i;
            if(!isprime(j))
            {
                continue;
            }
        while(temp%j==0 && temp>1){
            temp/=j;
            prime_sum+=j;
        }
       }
       ans+=prime_sum;
       ans%=mod;
       prime_sum=0;
    }
    cout<<ans%mod<<"\n";
 }
 return 0;
}
