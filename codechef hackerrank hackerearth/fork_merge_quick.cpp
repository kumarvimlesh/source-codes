#include<bits/stdc++.h>
//#include<sys/type.h>
using namespace std;
int main(){
 int pid=fork();
 if(pid){
    cout<<"parent process\n";
 }
 else{
    cout<<"child process";
 }
 return 0;
}
