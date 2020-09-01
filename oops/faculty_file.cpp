#include<iostream>
#include<fstream>
using namespace std;
fstream faculty[20];
int count=-1;
char name[20];
char dept[3];
float salary;
add_record()
{
    cout<<"Enter name department and salary of faculty : ";
    cin>>name>>dept>>salary;
    faculty[++count].open("faculty.txt",ios::app);
    faculty[count]<<name<<"      "<<dept<<"         "<<salary<<"\n";
    faculty[count].close();
}
display_all_records()
{
    ifstream faculty;
    cout<<"\nAll records : \n";
    faculty.open("faculty.txt",ios::in);
    while(faculty)
    {
        faculty>>name>>dept>>salary;
        cout<<name<<"           "<<dept<<"           "<<salary<<"\n";
    }
    faculty.close();
}
int main()
{
    int ch;
    while(1)
    {
        cout<<"\nchoose from the following : \n";
        cout<<"1-add record\n2-delete record\n3-update record\n4-display all records\n5-display a selected record\n6-count the number of records : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                add_record();
                break;
  //          case 2:
//                delete_record();
    //            break;
      //      case 3:
        //        update_record();
          //      break;
            case 4:
                display_all_records();
                break;
            //case 5:
              //  display_a_selected_record();
                //reak;
            //case 6:
              //  count_the_number_of_records();
               // break;
        }
    }
}
