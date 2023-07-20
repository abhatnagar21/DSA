#include<iostream>
using namespace std;
class node{
	public:
		int val;
		node *next;
};
void push(node *head,int data)
{
	node *newnode=new node();
	newnode->val=data;
	while(head->next!=NULL)
	{
		head=head->next;
	}
	head->next=newnode;
	
}
void pop(node *head)
{
	node *temp=head;
	head=head->next;
	temp=NULL;
	while(head!=NULL)
	{
		cout<<head->val<<" ";
		head=head->next;
	}
}
void display(node *head)
{
	while(head!=NULL)
	{
		cout<<head->val<<" ";
		head=head->next;
	}
}
int main()
{
	node *head=new node();
	head->val=10;
	push(head,120);
	push(head,84);
	push(head,980);
	push(head,45);
	//pop(head);
	pop(head);
	//pop(head);
	
}
