#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'minimumSwaps' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING status as parameter.
 */

int minimumSwaps(string status) {
    long long int i;
   long long int count1=0,count2=0;
   for(i=0;i<status.length();i++){
       cout<<"i="<<i<<" status[i]="<<status[i]<<"\n";
       if(status[i]==status[i+1])
         break;
   }
   if(status[i]=='S')
      status[i]='R';
    else {
      status[i]='S';
    }
    for(long long int a=i;a>0;a--){
        cout<<"a="<<a<<"\n";
        if(status[a]==status[a-1]){
            if(status[a-1]=='S')
               status[a-1]='R';
            else
               status[a-1]='S';
            count1++;
            cout<<count1<<"\n";
        }
    }

    if(status[i+1]=='S')
     status[i+1]='R';
    else {
    status[i+1]='S';
    }
    for(long long int a=i+1;a<status.length();a++){
        cout<<"a="<<a<<"\n";
        if(status[a]==status[a+1]){
            if(status[a+1]=='S')
               status[a+1]='R';
            else
               status[a+1]='S';
            count2++;
            cout<<count2<<"\n";
        }
    }
    return (count1>count2?count1:count2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string status;
    getline(cin, status);

    int result = minimumSwaps(status);

    fout << result << "\n";

    fout.close();

    return 0;
}
