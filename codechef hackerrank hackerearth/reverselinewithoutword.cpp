#include<bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int k;
	    int flag=0;
	    for(int i=str.length();i>=-1;i--){
	        if(str[i]=='.' || i==-1){
	            if(flag==1)
                    cout<<".";
                else
                    flag=1;
	            k=i+1;
	            //cout<<"\nk="<<k<<"\n";
	            while(1){
                    if(str[k]=='.' || k==str.length())
                        break;
	                cout<<str[k++];
                //cout<<str[i]<<" ";
	            }
	        }
	    }
	}
	return 0;
}
