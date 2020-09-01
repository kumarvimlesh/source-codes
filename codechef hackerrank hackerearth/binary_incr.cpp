#include <bits/stdc++.h>
using namespace std;

int main() {
	cout<<"GfG!";
	int n;
	cout<<"enter a binary number : ";
	cin>>n;
	int num=n,count=0;
	while(num/10){
	    if(num%10==0){
	        cout<<(num+1)*pow(10,count);
	        break;
	    }
	    else{
	        count++;
	    }
	    num/=10;
	    //cout<<"num="<<num<<"\n";
            if(num==0){
	        cout<<pow(10,count);
	    }
	}
	return 0;
}
