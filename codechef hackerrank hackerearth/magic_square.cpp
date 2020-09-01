#include<iostream>
using namespacce std;
int main(){
 int mat[3][3],sumrow[3],sumcol[3],temp=0,dig1=0,dig2=0;
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>mat[i][j];
        temp+=mat[i][j];
        if(i==j)
            dig1+=mat[i][j];
        if(i==2-j)
            dig2+=mat[i][j];
    }
    sumrow[i]=temp;
    temp=0;
 }
 for(int j=0;j<3;j++){
    for(int i=0;i<3;i++){
        temp+=mat[i][j];
    }
    sumcol[i]=temp;
    temp=0;
 }
 return0;
}
