#include<iostream>
using namespace std;
int main(){
 long long t;
 cin>>t;
 while(t--){
    long long m,n,q,count=0;
    cin>>n>>m>>q;
    long long mat[n+1][m+1];
    for(long long i=1;i<=n;i++){
        for(long long j=1;j<=m;j++){
            mat[i][j]=0;
        }
    }
    while(q--){
        long long x,y;
        cin>>x>>y;
        for(long long i=1;i<=n;i++){
            mat[i][y]+=1;
            mat[i][y]%=2;
        }
        for(long long i=1;i<=m;i++){
            mat[x][i]+=1;
            mat[x][i]%=2;
        }
    }
//cout<<"\n";
    for(long long i=1;i<=n;i++){
        for(long long j=1;j<=m;j++){
     //       cout<<mat[i][j]<<" ";
            if(mat[i][j]%2!=0)
              count++;
        }
   //     cout<<"\n";
    }
    cout<<count<<"\n";
 }
 return 0;
}
