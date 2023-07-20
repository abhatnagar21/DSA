#include<iostream>
using namespace std;
class node{
	public:
	int val;
	node *next;
	
};
int main()
{
	node *head=new node();
	head->val=10;
	cout<<head->val;
}
