#include<bits/stdc++.h>
using namespace std;
int update(long long int exor[],long long int a,long long int b,long long int c){
    exor[a]^=c;
    exor[b+1]^=c;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,q,sum=0,i,j,temp;
    cin>>n;
    long long int mat[n];
    for(i=0;i<n;i++)
       for(j=0;j<n;j++){
          cin>>temp;
          if(i==j)
             mat[i]=temp;
    }
    long long int exor[n+1];
    memset(exor,0,sizeof(exor));
    cin>>q;
    while(q--){
        long long int m,a,b,c;
        cin>>m>>a>>b>>c;
        update(exor,--a,--b,c);
    }
    for(i=1;i<n;i++){
        exor[i]^=exor[i-1];
    }
    for(int i=0;i<n;i++){
        mat[i]=exor[i]^mat[i];
        sum+=mat[i];
    }
    cout<<sum;
    return 0;
}
