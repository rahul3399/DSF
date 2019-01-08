#include<iostream>
using namespace std;
template <class T>
class stack1{
	private :
		int top;
		T e;
	public :
		T s1[10];
		stack1()
		{
			top=-1;
			
		}
		T push_(T n){
			int i=0;
			cout<<"\nEnter the Elmenet : ";
				cin>>e;
			if(top>=n-1)	
			{
				cout<<"\nstack Overflow You Cannot Insert : \n"<<endl;
			}
		
			else{
				top=top+1;
				s1[top]=e;
			}
			
		}
		int pop_(){
			if(top==-1)
			{
				cout<<"Stack Underflow\n\n";
			}
			else{
				top=top-1;
				cout<<"SuccessFully Popped";
			}
		}
		int display_(int n)
		{
			for(int i=top;i>=0;i--)
			{
				cout<<s1[i]<<endl;
			}
		}

};
main(){
	stack1<char> s;
	int size;
	int c;
	cout<<"\n Enter the Size :\n";
	cin>>size;
	do
	{
		cout<<"----->Menu<------\n";
		cout<<"1. Push Data \n";
		cout<<"2. Pop Data \n";
		cout<<"3. Display \n";
			cout<<"\nEnter the Choice";
			cin>>c;
			switch(c){
			case 1:
				s.push_(size);	
			break;
			case 2:
				s.pop_();	
			break;
			case 3:
				s.display_(size);
			break;
			}
	}while(c!=4);			
}
