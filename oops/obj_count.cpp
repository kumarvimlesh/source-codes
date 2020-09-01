#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class person
{
    public:
   	    string name;
   	    int age;
   	public:
   		person()
   		{
   			cout<<"Enter the name and age of person : ";
   			cin>>name>>age;
   			fstream ofile;
   			ofile.open("person.txt",ios::out | ios::app);
   			ofile<<name<<" "<<age;
   			ofile.close();
		}
};
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
	string name;
	int age;
	int loc;
	person p;
	int count=0;
	fstream ifile;
	ifile.open("person.txt",ios::in);
	cout<<"Reading from begining : \n";
	while(ifile.eof()==0)
	{
		ifile>>p.name>>p.age;
		cout<<p.name<<" "<<p.age<<"\n";
		count++;
	}
	ifile.close();
    ifile.open("person.txt",ios::in);
    cout<<"Enter the name and age of person object to find location : ";
    cin>>name>>age;
	while(ifile.eof()==0)
	{
		ifile>>p.name>>p.age;
	    if(p.name==name && age==p.age)
	    {
	    	loc=ifile.tellg();
		}
	}
	ifile.close();
	cout<<"Location of object : "<<loc<<"\n";
	ifile.open("person.txt",ios::in);
	ifile.seekg(loc,ios::beg);
	cout<<"Reading after location : \n";
	while(ifile.eof()==0)
	{
		ifile>>p.name>>p.age;
		cout<<p.name<<" "<<p.age<<"\n";
	}
	ifile.close();
	cout<<"Number of object : "<<count;
	return 0;
}
