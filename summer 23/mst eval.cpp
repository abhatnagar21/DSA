/*arun bhatnagar 
102169006
2-em1
*/
#include<iostream>
#include<vector>
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
if(head->next->val>100)
{
head->next->val=head->next->val/10;
}

}*/
int main()
{
	vector<int> answer;
node *head=new node();
head->val=11;
append(head,15);
append(head,6);
append(head,13);
append(head,12);
display(head);
cout<<endl;
//display(head);
while(head!=NULL)
{
	answer.push_back(head->val);
	head=head->next;
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
for(int i=0;i<answer.size();i++)
{
	cout<<answer[i]<<" ";
}

}
