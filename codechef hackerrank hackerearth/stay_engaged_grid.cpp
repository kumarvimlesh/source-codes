#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    long long n,i,j,ht,wi,max=0;
    cin>>n;
    long long mat[n][3];
    for(i=0;i<n;i++)
        cin>>mat[i][1]>>mat[i][2];
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            //cout<<" point"<<mat[i][1]<<","<<mat[i][2]<<" && "<<mat[j][1]<<","<<mat[j][2]<<"\n";
            ht=0;
            wi=0;
            if(mat[i][2]>mat[j][2])
                ht=mat[i][2]-mat[j][2];
            else
                ht=mat[j][2]-mat[i][2];
            if(mat[i][1]>mat[j][1])
                wi=mat[i][1]-mat[j][1];
            else
                wi=mat[j][1]-mat[i][1];
            if(max<ht+wi)
                max=ht+wi;
            //cout<<"max="<<max<<"\n";
        }
    }
    cout<<max<<"\n";
 }
 return 0;
}
