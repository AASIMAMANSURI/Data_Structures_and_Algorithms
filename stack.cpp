#include<iostream>

using namespace std;

class stack
{
	int *a;
	int n;
	int top ;
	
	public:
		stack()
		{
			cout<<"enter the size of the aary:\n size :";
			cin>>n;
			a= new int[n];
			top = -1;
		}
		
	// insert an element in stack
	void push(int x)
	{
		if(top == (n-1))
		{
			
			cout<<"stack overflow";
		}
		else
		{
			top++;
			a[top] = x;
			cout<<"inserted : "<<a[top];
		}
	}
	
	//returns the top element in stack
	void Top()
	{
		if(top== -1)
		{
			cout<<"stack is empty";
		}
		else
		{
			cout<<"top element is :" <<a[top];
		}
	}
	
	// remove the element from the stck
	void pop()
	{
		if(top == -1)
		{
			cout<<"no elements are in stack";
			}	
		else
		{cout<<"removed : "<<a[top];
			top --;
			
			}	
		
	}	
};

int main()
{
	stack st;
	
	int ch,x;
		cout<<"\n\n\n1. psuh the element in the stack\n2.top element of the stack.\n3.pop the element.";
	do{
		cout<<"\n\nenter the choise";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"enter the element";
				cin>>x;
				st.push(x);
				break;
			case 2:
				st.Top();
				break;
			case 3:
				st.pop();
				break;
			default :
				cout<<"wrong choise :";
				break;
		}
			
	}
	while(ch != 99);
	
}

