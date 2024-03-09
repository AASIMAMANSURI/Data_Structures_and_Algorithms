#include<iostream>
using namespace std;


// stack using linklist

struct node {
	int data;
	struct node *next;
	
	node (int l_data){
		data =l_data;
		next = NULL;
	}
};


class stack{
public :
	struct node *head;
	
	stack()
	{
		head=NULL;
	}
	
	void push(int x)
	{
	struct node *newnode = new node(x);		
		if (head == NULL)
		{
			head = newnode;
			cout<<"element is pushed to stack. : "<<newnode->data;
		}
		else
		{
			newnode->next =head;
			head =newnode;
			cout<<"element is pushed to stack. : "<<newnode->data;
		}
	}
	
	
	void pop()
	{
		if(head == NULL)
		{
			cout<<"no element to pop .";
		}
		else
		{
			struct node * temp;
			temp = head ;
			head = head->next;
			
			cout<<"removed : "<<temp->data;
			delete temp;
		}
		
	}
	
};

int main()
{
	stack s;
	
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
				s.push(x);
				break;
				
			case 2:
				s.pop();
				break;
				
			default :
				cout<<"wrong choise :";
				break;
				
		}
			
	}
	while(ch != 99);
	
}

