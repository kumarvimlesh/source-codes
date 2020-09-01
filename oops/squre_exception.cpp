#include<bits/stdc++.h>
using namespace std;
template<class T>
class square
{
    T a;
public:
    square()
    {
        T num;
        cout<<"Enter number to find square : ";
        cin>>num;
        try
        {
            int b=(char)num;
            if(b==0)
            throw(2);
            else
                a=num*num;
        }
        catch(int)
        {
            cout<<"This is not a number";
            _Exit(1);
        }
    }
    void display()
    {
        cout<<"Square of number is : "<<a;
    }
};
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
    square<float> s1;
    s1.display();
    return 0;
}
