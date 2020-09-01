#include<iostream>
using namespace std;
template<class T>
class stack
{
	private:
		int top;
	    T arr[4];
	public:
	    stack()
	    {
	    	top=-1;
	    	for(int i=0;i<4;i++)
            {
                arr[i]=0;
            }
		}
		void push()
		{
			if(top>=3)
			{
				cout<<"Overflow !\n";
			}
			else
			{
				T num;
				cout<<"Enter the number you want to push : ";
	            cin>>num;
				arr[++top]=num;
			}

		}
		T pop()
		{
			if(top<0)
			{
				cout<<"Underflow !\n";
			}
			else
			{
			    T num1;
			    num1=arr[top];
			    top--;
			    cout<<num1<<"\n";
		   }
		}
		void display()
		{
		    if(top<0)
                cout<<"Stack is empty !";
            else
		    {
		        for(int i=0;i<=top;i++)
                {
                  cout<<arr[i]<<" ";
                }
		    }
		    cout<<"\n";
		}
};
int main()
{
    cout<<"*************"<<endl<<"Vimlesh kumar"<<endl<<"171210059"<<endl<<"*************"<<endl;
	//stack <int>S1;//for integer type
	stack <char>S1;//for character type
	while(1)
	{
		int ch;
		cout<<"1-push   2-pop   3-display\nselect option: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
	            S1.push();
			    break;
			case 2:
				S1.pop();
				break;
            case 3:
                S1.display();
                break;
			default:
			  	return(0);
		}
    }
    return 0;
}

