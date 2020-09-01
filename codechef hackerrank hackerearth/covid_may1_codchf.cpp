#include<iostream>
using namespace std;
int main(){
  long long int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int X[n],diff[n-1];
    for(int i=0;i<n;i++)
       cin>>X[i];
    int min=n,max=1;
    for(int i=0;i<n-1;i++){
       diff[i]=X[i+1]-X[i];
       //cout<<diff[i]<<" ";
    } 
    //cout<<"\n";
    int curr=1;
    for(int i=0;i<n-1;i++){
       //cout<<" curr="<<curr<<" min="<<min<<" max="<<max<<"\n";
       if(diff[i]<=2){
          curr++;
          if(curr>max)
            max=curr;
       }
       else{
          if(curr<min)
            min=curr;
          if(curr>max)
            max=curr;
          curr=1;
       }
    }
    cout<<min<<" "<<max<<"\n";
  }
 return 0;
}
