#include<iostream>
using namespace std;
class node{
	public:
		int val;
		node *next;
};
void push(node *head,int val)
{
	node *n=new node();
	n->val=val;
	while(head->next!=NULL)
	{
		head=head->next;
	}
	head->next=n;
}
void pop(node *head)
{
	node *prev=head;
	head=head->next;
	prev=NULL;
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
	push(head,49);
	push(head,45);
	push(head,34);
	pop(head);
	
}
