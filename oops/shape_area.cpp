#include<bits/stdc++.h>
using namespace std;
class shape
{
    public:
    virtual void area()=0;
    virtual void perimeter()=0;
    virtual void display()=0;
};
class rectangle : public shape
{
private:
    float l,b,a,p;
public:
    rectangle(){
        cout<<"\nEnter length and breadth of rectangle : ";
        cin>>l>>b;
    }
    void area(){
        a=l*b;
    }
    void perimeter(){
        p=2*(l+b);
    }
    void display(){
        cout<<"area : "<<a<<"\nperimeter : "<<p<<"\n";
    }
};
class square : public shape
{
private:
    float s,a,p;
public:
    square(){
        cout<<"\nEnter side of square : ";
        cin>>s;
    }
    void area(){
        a=s*s;
    }
    void perimeter(){
        p=4*s;
    }
    void display(){
        cout<<"area : "<<a<<"\nperimeter : "<<p<<"\n";
    }
};
class triangle : public shape
{
private:
    float x,y,z,s,a,p;
public:
    triangle(){
        cout<<"\nEnter all sides x y and z of triangle : ";
        cin>>x>>y>>z;
        s=(x+y+z)/2;
    }
    void area(){
        a=sqrt(s*(s-x)*(s-y)*(s-z));
    }
    void perimeter(){
        p=2*s;
    }
    void display(){
        cout<<"area : "<<a<<"\nperimeter : "<<p<<"\n";
    }
};
class circle : public shape
{
private:
    float r,a,p;
public:
    circle(){
        cout<<"\nEnter radius of circle : ";
        cin>>r;
    }
    void area(){
        a=3.14*r*r;
    }
    void perimeter(){
        p=2*3.14*r;
    }
    void display(){
        cout<<"area : "<<a<<"\nperimeter : "<<p<<"\n";
    }
};
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
    shape *sptr;
    cout<<"\nrectangle : ";
    rectangle rect;
    sptr=&rect;
    sptr->area();
    sptr->perimeter();
    sptr->display();
    cout<<"\nsquare : ";
    square sq;
    sptr=&sq;
    sptr->area();
    sptr->perimeter();
    sptr->display();
    cout<<"\ntriangle : ";
    triangle tri;
    sptr=&tri;
    sptr->area();
    sptr->perimeter();
    sptr->display();
    cout<<"\ncircle : ";
    circle cir;
    sptr=&cir;
    sptr->area();
    sptr->perimeter();
    sptr->display();
    return 0;
}
