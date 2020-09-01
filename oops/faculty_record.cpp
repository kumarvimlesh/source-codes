#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
	int id;
	string name;
	string dept;
	float salary;
	int count=-1;
                fstream ifile;
                ifile.open("faculty_record.txt",ios::in);
                while(ifile.eof()==0)
                {
                    ifile>>id>>name>>dept>>salary;
                    count++;
                }
                ifile.close();
	int ch;
	while(1)
    {
	    cout<<"\n1-add new record\n2-delete record\n3-update record\n4-display all record\n5-display a random record\n6-count the number of records : \n";
	    cout<<"Select from the options : ";
	    cin>>ch;
	switch(ch)
	{
		case 1:
			{
            fstream ofile;
			ofile.open("faculty_record.txt",ios::out | ios::app);
			cout<<"Enter id name department and salary of faculty : ";
			cin>>id>>name>>dept>>salary;
			ofile<<id<<"   "<<name<<"	 "<<dept<<"  	"<<salary<<"\n";
			ofile.close();
			count++;
			cout<<"Record added successfully \n";
			break;
			}
		case 2:
			{
            int id1;
			int count1=0;
            fstream ifile,temp;
			ifile.open("faculty_record.txt",ios::in |ios::out);
			temp.open("temp.text",ios::out);
			cout<<"Enter faculty id which is to be deleted : ";
			cin>>id1;
			for(int i=1;i<=count;i++)
			{
			    ifile>>id>>name>>dept>>salary;
				if(id!=id1)
				{
			         temp<<id<<"    "<<name<<"    "<<dept<<"    "<<salary<<"\n";
			         count1++;
		    	}
			}
			count=count1;
			ifile.close();
			temp.close();
			remove("faculty_record.txt");
			rename("temp.text","faculty_record.txt");
			cout<<"Record deleted successfully\n";
			break;
			}
		case 3:
		    {
            int n;
            fstream ifile;
			ifile.open("faculty_record.txt",ios::out | ios::in );
			cout<<"Enter id of faculty which is to be update : ";
			cin>>n;
			for(int i=1;i<=count;i++)
			{
			    int loc=ifile.tellg();
			    ifile>>id>>name>>dept>>salary;
				if(id==n)
				{
					cout<<"Enter updated name department and salary of faculty : ";
			        cin>>name>>dept>>salary;
			        ifile.seekg(loc,ios::beg);
					 ifile<<id<<"      "<<name<<"     "<<dept<<"      "<<salary<<"\n";
					 break;
		    	}
			}
			ifile.close();
			cout<<"Record updated successfully\n";
			break;
		    }
        case 4:
            {
                cout<<"All records : \n";
                fstream ifile;
                ifile.open("faculty_record.txt");
                for(int i=1;i<=count;i++)
                {
                    ifile>>id>>name>>dept>>salary;
                    cout<<id<<"    "<<name<<"   "<<dept<<"  "<<salary<<"\n";
                }
                ifile.close();
                break;
            }
        case 5:
            {
                int n;
                cout<<"Enter the faculty id Which you want to display : ";
                cin>>n;
                fstream ifile;
                ifile.open("faculty_record.txt",ios::in);
                for(int i=1;i<=count;i++)
                {
                    ifile>>id>>name>>dept>>salary;
                    if(id==n)
                    {
                        cout<<id<<"    "<<name<<"   "<<dept<<"  "<<salary<<"\n";
                    }
                }
                ifile.close();
                break;
            }
        case 6:
            {
                cout<<"\nTotal number of records : "<<count<<"\n";
                break;
            }
        default :
            {
                exit(1);
            }
	}
    }
}
