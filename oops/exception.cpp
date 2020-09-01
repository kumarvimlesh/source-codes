#include<iostream>
using namespace std;
class matrix
{
	private:
		int m,n;
		int mat[5][5];
	public:
		matrix()
		{
			for(int i=0;i<5;i++)
			{
				for(int j=0;j<5;j++)
				{
					mat[i][j]=0;
				}
			}
		}
		 matrix(int a,int b)
		{
			m=a;
			n=b;
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				{
					mat[i][j]=0;
				}
			}
		}
	    getdata()
		{
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				{
					cin>>mat[i][j];
				}
			}
		}
  		void display(int m,int n)
		{
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				{
					cout<<mat[i][j]<<" ";
				}
				cout<<"\n";
			}
		}
		matrix operator +(matrix obj)
		{
			matrix temp;
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				{
					temp.mat[i][j]=mat[i][j]+obj.mat[i][j];
				}
			}
			return temp;
		}
};
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
	int m1,n1,m2,n2;
	cout<<"Enter the Rows And Column for matrix 1 : ";
	cin>>m1>>n1;
	cout<<"Enter the Rows And Column for matrix 2 : ";
	cin>>m2>>n2;
	try
	{
		if(n1!=n2 or m1!=m2)
		    throw m1;
		else
		{
			matrix M1(m1,n1);
			cout<<"Insert elements to the matrix 1 : \n";
			M1.getdata();
	        matrix M2(m2,n2);
	        cout<<"Insert elements to the matrix 2 : \n";
	        M2.getdata();
	        matrix M3;
	        M3=M1+M2;
	        cout<<"Sum of Two matrices is : \n";
	        M3.display(m1,n1);
		}
	}
	catch(int)
	{
		cout<<"Rows and column are not equal for two matrices\n";
		cout<<"Exception Thrown !\n";
	}
	return 0;
}
