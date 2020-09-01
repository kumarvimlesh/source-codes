#include<iostream>
#define ll long long int
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    ll n,s;
    cin>>n>>s;
    ll arr[n+1],arrc[n+1];
    arrc[0]=0;
    for(ll i=1;i<=n;i++){
        cin>>arr[i];
        arrc[i]+=arrc[i-1];
    }

 }
}
