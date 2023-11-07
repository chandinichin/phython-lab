#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int data;
	struct node*next;
};
struct node*head=NULL;
void insert(int new_data)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=new_data;
	newnode->next=head;
	head=newnode;
}
void display()
{struct node*ptr;
ptr=head;
while(ptr!=NULL)
{
	cout<<ptr->data<<" ";
	ptr=ptr->next;
}
}
void insertbeg(int item)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->next=head;
	head=newnode;
}
int main()
{
	insert(3);
	insert(1);
	insert(7);
	insert(2);
	insert(9);
	cout<<"The linked list is :";
	display();
	int ch,item;
	do
	{
		cout<<"\n Enter the new item to insert \n";
		cin>>item;
		insertbeg(item);
		cout<<"press 0 to add more elements\n";
		cin>>ch;
	}
	while(ch==0);
	display();
	return(0);
}
