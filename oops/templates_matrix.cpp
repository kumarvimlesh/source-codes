#include<iostream>
using namespace std;
template<class T>
class matrix
{
public:
    T mat[3][3];
public:
    matrix()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                mat[i][j]=0;
            }
        }
    }
    getvalue()
    {
        cout<<"Insert value in the matrix : \n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>mat[i][j];
            }
        }
    }
    void display()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<mat[i][j]<<"  ";
            }
            cout<<"\n";
        }
    }
    matrix operator +(matrix obj)
    {
        matrix<T> temp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                temp.mat[i][j]=mat[i][j]+obj.mat[i][j];
            }
        }
        return temp;
    }
    matrix operator -(matrix obj)
    {
        matrix<T> temp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                temp.mat[i][j]=mat[i][j]-obj.mat[i][j];
            }
        }
        return temp;
    }
    matrix operator *(matrix obj)
    {
        matrix<T> temp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    temp.mat[i][j]+=mat[i][k]*obj.mat[k][j];
                }
            }
        }
        return temp;
    }
    matrix operator !=(matrix obj)
    {
        int count=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(mat[i][j]!=obj.mat[i][j])
                    count++;
            }
        }
        if(count!=0)
            cout<<"Matrices are Not Equal\n";
        else
            cout<<"Matrices are Equal\n";
    }
};
int main()
{
    cout<<"*************\nVimlesh kumar\n171210059\n*************\n";
    int choice;
    //matrix<int> M1,M2,M3;//for integer
    matrix<float> M1,M2,M3;//for float
    cout<<"Matrix 1\n";
    M1.getvalue();
    cout<<"Matrix 2\n";
    M2.getvalue();
    while(1)
    {
        cout<<"\n1-Overload '+' operator\n2-Overload '-' operator\n3-Overload '*' operator\n4-Overload '!=' operator\n";
        cout<<"Select from above : ";
        cin>>choice;
        switch(choice)
        {
           case 1:
               M3=M1+M2;
               M3.display();
               break;
           case 2:
               M3=M1-M2;
               M3.display();
               break;
           case 3:
               M3=M1*M2;
               M3.display();
               break;
           case 4:
               (M1!=M2);
               break;
           default :
               return(0);
        }
    }
    return 0;
}
