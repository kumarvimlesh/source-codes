#include<iostream>
using namespace std;
class Box
{
    private:
        int length;
        int breadth;
        int height;
    public:
        Box()
        {
            length=0;
            breadth=0;
            height=0;
        }
        getinput()
        {
            cout<<"Enter the length : ";
            cin>>length;
            cout<<"Enter the breadth : ";
            cin>>breadth;
            cout<<"Enter the height : ";
            cin>>height;
            cout<<"\n";
        }
        Box operator + (Box obj)
        {
            Box b3;
            b3.length=length+obj.length;
            b3.breadth=breadth+obj.breadth;
            b3.height=height+obj.height;
            return b3;
        }
        display()
        {
            cout<<length<<" "<<breadth<<" "<<height<<"\n";
        }
        void volume()
        {
            int v=0;
            v=length*breadth*height;
            cout<<v<<"\n";
        }
};
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
    Box b1,b2,b3;
    cout<<"Box1 : \n";
    b1.getinput();
    cout<<"Box2: \n";
    b2.getinput();
    b3=b1+b2;
    cout<<"Volume of Box1 : ";
    b1.volume();
    cout<<"Volume of Box2 : ";
    b2.volume();
    cout<<"Dimensions of Box3 (Length Breadth Height) : ";
    b3.display();
    cout<<"Volume of Box3 : ";
    b3.volume();
    return 0;
}
