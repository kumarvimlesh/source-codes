#include<bits/stdc++.h>
using namespace std;
class Time
{
    string t1;
    string t2;
public:
    Time()
    {
        cout<<"Enter the start time -> ";
        cin>>t1;
        cout<<"Enter the end time -> ";
        cin>>t2;
        try
        {
            if(t1[2]!=':' || t2[5]!=':' || t2[2]!=':' || t1[5]!=':' || t2[0]*10+t2[1]>552 || t2[0]*10+t2[1]>552)
                {
                    throw('w');
                }
        }
        catch(char)
        {
            cout<<"Time format is wrong";
            _Exit(1);
        }
    }
    void display()
    {
        int h,m,s;
        s=(t2[6]*10+t2[7])-(t1[6]*10+t1[7]);
        m=(t2[3]*10+t2[4])-(t1[3]*10+t1[4]);
        h=(t2[0]*10+t2[1])-(t1[0]*10+t1[1]);
        if(s<0)
            {
                m-=1;
                s+=60;
            }
        if(m<0)
           {
                h-=1;
                m+=60;
           }
        try
        {
            if(h<0)
                throw(1);
            else
            {
                cout<<"Exam duration is : "<<h<<":"<<m<<":"<<s;
            }
        }
        catch(int)
        {
            cout<<"Start time is greater than end time\n";
            _Exit(1);
        }
    }
};
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
    Time T;
    T.display();
    return 0;
}
