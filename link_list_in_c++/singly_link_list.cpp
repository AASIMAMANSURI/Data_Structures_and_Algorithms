#include<iostream>
using namespace std;

struct node {
	int data;
	struct node *next;
	
	node (int l_data){
		data =l_data;
		next = NULL;
	}
};


class link_list {
	public:
	struct node *head;
		link_list()
		{
			head = NULL;
		
		}
		
		// add first
		void add_first(int l_data)
		{
			struct node *newnode = new node(l_data);
			
			if(head == NULL)
			{
				head = newnode;
			}
			else 
			{
				newnode->next =head;
				head =newnode;
			}
		}
		
		
		//add last
		
		void add_last(int l_data)
		{
			
			struct node *newnode = new node(l_data);
			
			if(head==NULL)
			{
				head = newnode;
			}
			
			else
			{
				struct node *curr=head;
				while(curr->next != NULL)
				{
					curr = curr->next;
				}
				curr->next=newnode;
			}
		}
		
		void add_at_pos(int l_data, int pos)
		{
			int total_c =1;
			
			if(head ==NULL)
			{
				cout<<"link list is empty";
			
			}
			else
			
			{		struct node *newnode = new node(l_data);
					struct node *curr=head;
					int count =1;
					while (curr->next != NULL)
					{
						curr = curr->next;
						total_c = total_c + 1;
					}
					if (pos > total_c)
					{
						cout<<"\n\n ******\n\ninvalid position...\n position ios out of range.\n\n *****\n\n\n";
					}
					else
					{
						curr = head;
						while(curr!= NULL && count< pos-1)
						{
							curr=curr->next;
							count ++;
						}
							newnode->next =curr->next;
							curr->next= newnode;
					}
			}
			
		}
		//display
			
		void display()
		{
			struct node *curr = head;
			cout<<"________________________________"<<endl;
			while(curr != NULL)
			{
				cout<<curr->data<<endl;
				curr=curr->next;
			}
			cout<<"________________________________"<<endl;
			cout<<endl;
		}
};

		
int main()
{
	link_list ll;
	int choise ,ele,poss;
	
	do
	{
	
		cout<<"1. add the element at first . \n2.add the element at last. \n3.add element from given position. \n4. delete the element from first. \n5. delete the element fron end. \n6.delete the element from the given postion. \n7. display.\n";

		cout<<"\n\n enter the choice :\n";
		cin>>choise ;
		
				
		switch (choise)
		{
			case 1: 
			
				cout<<"enter the element to add first:\n";
				cin>>ele;
				ll.add_first(ele);
				
			break;
			
			case 2:
				
				cout<<"enter the element to add last:\n";
				cin>>ele;
				ll.add_last(ele);
				break;
				
			case 3:
				
				cout<<"enter position :\n";
				cin>>poss;
				cout<<"enter element to add at "<<poss <<" position"<<endl;
				cin>>ele;
				ll.add_at_pos(ele,poss);
			break;
			case 7:
				
				ll.display();
				
			break;
		}
	}
	while(choise != 99);

	
}
