#include<iostream>
using namespace std;
int arr[5];
int ind=-1;
int max_size=5;
int push(int data)
{ 
	 if(ind==max_size)
	 {
	 	cout<<"overflow";
	 	return 0;
	 }
		ind++;
		arr[ind]=data;
	
}
int pop()
{
	if(ind==0)
	{
		cout<<"underflow";
		return 0;
	}
	ind=ind-1;
}
void display()
{
	for(int i=0;i<ind;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	push(2);
	push(9);
	pop();
	push(8);
	push(7);
	push(6);
	push(4);
	push(6);
	display();
}
