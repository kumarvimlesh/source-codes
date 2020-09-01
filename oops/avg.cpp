
#include<iostream>
using namespace std;
class class2;
class class1
{
	private:
		float a,b,c;
	public:
		class1()
		{
			cout<<"enter the 3 values of object of class1\n";
			cin>>a>>b>>c;
		};
		friend int avg(class1, class2);
};
class class2
{
	private:
		float c,d;
	public:
		class2()
		{
			cout<<"enter the 2 values of object of class2\n";
			cin>>c>>d;
		};
		friend int avg(class1, class2);
};
int avg(class1 obj1, class2 obj2)
{
	float ans=0;
	ans=(obj1.a+obj1.b+obj1.c+obj2.c+obj2.d)/5;
	cout<<"avg: "<<ans;
}
int main()
{
	cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
	cout<<"average of object values using friend function\n\n";
	class1 obj1;
	class2 obj2;
	avg(obj1, obj2);
	return 0;
}

