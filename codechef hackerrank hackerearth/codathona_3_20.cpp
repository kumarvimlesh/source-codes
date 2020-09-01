#include<bits/stdc++.h>
using namespace std;
long long int comb(long long int a,long long int b,long long int fact[]){
    return (fact[a]/(fact[a-b]*fact[b]));
}
int main(){
    long long int vim=1000000009;
    long long int n,m,l,mult=0,not_mult=0,sum=0,i,k;
    cin>>n>>m>>l;
    long long int cost[l];
    /////
    long long int fact[n*l];
    fact[0]=1;
    fact[1]=1;
    for(i=2;i<n*l;i++)
        fact[i]=i*fact[i-1];
    /////
    for(i=0;i<l;i++){
        cin>>cost[i];
        if(cost[i]%m==0)
            mult++;
    }
    long long int r=n/m;
    cout<<"\nmult="<<mult<<" r="<<r;
    for(k=0;k<n;k++){
        sum+=comb(n*r,k,fact)*comb(r*m*(l-r),(n-k)/m,fact);
        sum%=vim;
        cout<<"\nsum="<<sum;
    }
    cout<<sum%vim;
    return 0;
}
