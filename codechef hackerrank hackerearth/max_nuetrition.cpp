#include<bits/stdc++.h>
using namespace std;
long long int findmax(long long int arr[],long long int n){
   long long int max=0;
   for(long long int i=0;i<n;i++;){
        if(arr[i]>max)
            max=arr[i];
    }
    return i;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    long long int n,w,x,y,temp=0,curr_weight=0,max1=0,max2=0;
    cin>>n>>w>>x>>y;
    long long int weight[n],value[n];
    for(long long int i=0;i<n;i++;){
        cin>>weight[i];
    }
    for(long long int i=0;i<n;i++;){
        cin>>value[i];
    }
    temp=n;
    while(temp>1){
        max1=findmax(value,n);
        value[max1]=0;
        while(1){
           max2=findmax(value,n);
           if(curr_weight+weight[max1]+weight[max2]<=w){
              curr_weight+=weight[max1]+weight[max2];
              value[max2]=0;
              break;
           }
           else{
              tmp1=max1;
              tmp2=max2;
           }
        }
    }
  }
}
