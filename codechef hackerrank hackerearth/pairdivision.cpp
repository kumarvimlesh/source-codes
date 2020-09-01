#include <iostream>

using namespace std;

int main(){
    long long int n,k,count=0;
    cin>>n>>k;
    long int a[n],m[k];
    for(int i=0;i<k;i++){
        m[i]=0;
    }
    for(int i=1;i<=n;i++){
        cin>>a[i];
        m[a[i]%k]++;
    }
    count+=(m[0]*(m[0]-1))/2;

    if(k%2==0){
        for(int i=1;i<=k/2+1;i++){
         count+=m[k-i]*m[i];
       }
    }
    else{
        for(int i=1;i<=k/2;i++){
          count+=m[k-i]*m[i];
       }
    }
    cout<<count;
    return 0;
}
