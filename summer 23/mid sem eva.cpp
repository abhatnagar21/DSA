#include<iostream>

using namespace std;
class node{
	public:
		int val;
		node *next;
		
};
void append(node *head,int data)
{
	node *n=new node();
	n->val=data;
	while(head->next!=NULL)
	{
		head=head->next;
	}
	head->next=n;
	
}
void display(node *head)
{
	while(head!=NULL)
	{
		cout<<head->val<<" ";
		head=head->next;  
	}


}
/*void replace(node *head)
{
	node *temp;
	temp=head;
	head=head->next;
head->next->val=temp->val*head->next->val;

}*/
int main()
{
	int answer[5];
node *head=new node();
head->val=45;
append(head,23);
append(head,17);
append(head,15);
append(head,28);
display(head);
cout<<endl;
//display(head);
while(head!=NULL)
{
	int i=0;
	answer[i]=head->val;
	head=head->next;
	i++;
}
swap(answer[0],answer[1]);
swap(answer[3],answer[4]);
cout<<endl;

for(int i=1;i<=3;i++)
{
	answer[i]=answer[i]*answer[i+1];
	if(answer[i]>100)
	{
		answer[i]=answer[i]/10;
	}
}
for(int i=0;i<5;i++)
{
	append(head,answer[i]);
}
display(head);
}
