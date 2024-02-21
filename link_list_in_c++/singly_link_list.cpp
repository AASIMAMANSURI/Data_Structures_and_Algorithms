#include<iostream>
#include<stdlib.h>
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

// add at given position

void add_at_pos(int l_data, int pos)
{
int total_c =1;

if(head ==NULL)
{
cout<<"\nlink list is empty\n";

}
else

{ struct node *newnode = new node(l_data);
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


// delete the element from the first

void delete_first()
{
if(head == NULL)
{
cout<<" \nlink list is empty.\n";
}
else
{
struct node *temp;

temp =head;
head = head->next;
delete temp;
}
}

// delete the element from end

void delete_last()
{
if (head == NULL)
{
cout<<"\nlink list is empty\n";
}
else if(head->next == NULL)
{
struct node *temp=head;
delete temp;
head =NULL;
}
else
{
struct node *curr=head;

while(curr->next->next != NULL)
{
curr =curr->next;
}
delete curr->next;
   curr->next = NULL;

}
}
//delete at position

void delete_at_pos(int poss)
{

if(head == NULL)
{
cout<<"\n\nlink list is empty...\n\n";
}
int count =1;
struct node *curr =head;

while(curr->next != NULL && poss-1 > count )
{
curr=curr->next;
count++;

}
struct node *temp =curr->next;
curr->next =curr->next->next;
delete temp;



}
//search

void search_element(int l_data)
{
if(head == NULL)
{
cout<<"\nlist is empty... no elements are there to search\n";
}
else
{
struct node *curr= head;
while(curr->next != NULL && curr->data != l_data)
{
curr= curr->next;
}
if( curr->data == l_data)
{
cout<<curr->data<<"\n is found ...\n";
}
else
{
cout<<"\n not found...\n";
}
}
}

// update element
	
void update(int ele, int new_ele) {
    struct node *curr = head;
    
    while (curr != NULL && curr->data != ele) {
        curr = curr->next;
    }
    
    if (curr != NULL) {
        curr->data = new_ele;
        cout << "\nElement is updated.\n" << endl;
    } else {
        cout << "\nElement is not found.\n" << endl;
    }
}

		

//display

void display()
{
struct node *curr = head;
cout<<"________________________________"<<endl;

if (head ==NULL)
{
cout<<"no element in link list\n\n";
cout<<"________________________________"<<endl;
}
else
{
while(curr != NULL)
{
cout<<curr->data<<endl;
curr=curr->next;
}
cout<<"________________________________"<<endl;
cout<<endl;
}
}
};


int main()
{
link_list ll;
int choise ,ele,poss,new_ele;

do
{

cout<<"0.Display \n1. add the element at first . \n2.add the element at last. \n3.add element from given position. \n4. delete the element from first. \n5. delete the element fron end. \n6.delete the element from the given postion. \n7. search an element in list.\n8.update the given element.\n";

cout<<"\n\n enter the choice :\n";
cin>>choise ;


switch (choise)
{
case 0:
ll.display();
break;

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

case 4:
ll.delete_first();
break;

case 5:
ll.delete_last();
break;

case 6:
cout<<"enter the pos to delete the element";
cin>>poss;
ll.delete_at_pos( poss);
break;

case 7:
cout<<"enter the element to search:\n";
cin>>ele;
ll.search_element(ele);
break;

case 8:
		cout<<"enter the element to update.";
		cin>>ele;
		cout<<"enter the new number:";
		cin>>new_ele;
		ll.update(ele,new_ele);
break;
}
}
while(choise != 99);


}

