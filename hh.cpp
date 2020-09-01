#include <iostream>
using namespace std;
long long int incr_binary(long long int num){
    long long int count=0;
	while(num/10){
	    if(num%10==0){
	        return ((num+1)*pow(10,count));
	        break;
	    }
	    else{
	        count++;
	    }
	    num/=10;
	}
}
int main() {
	//code
	long long int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int num=1;
	    for(int i=1;i<n;i++){
	        cout<<num<<" ";
	        num=incr_binary(num);
	    }
	}
	return 0;
}
