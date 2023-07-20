#include<iostream>
using namespace std;
class node{
	public:
		int val;
		node *next;
};
node *insert(node *root,int data)
{
	node *n=new node();
	n->val=data;
	n->next=root;
	
	return n;
}
void append(node *root,int data){
	node *n=new node();
	
	while(root->next!=NULL)
	{
		root=root->next;
	}
	root->next=n;
	n->val=data;
	n->next=NULL;
}
void display(node *root)
{
	while(root!=NULL)
	{
		cout<<root->val<<" ";
		root=root->next;
	}
}
/*void insertafterhead(node *root,int data)
{
	node *n=new node();
	n->val=data;
	n->next=root->next;
	n=root->next;
	
	
}*/
int main()
{
	node *head=new node();
	head->val=10;
	//append(head,50);
	//display(head);
	head=insert(head,40);
	head=insert(head,60);
	display(head);
}
