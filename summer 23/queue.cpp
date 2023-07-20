//[10,20,30,40,50],f=0,r=4
#include<iostream>
using namespace std;
const int size=5;
int arr[size];
int front=-1,rear=-1;
int push(int value)
{
   if ((front == 0 && rear == size-1) ||
            (rear == (front-1)%(size-1)))
    {
        cout<<"\nQueue is Full";
        return 0;
    }
 
    else if (front == -1) /* Insert First Element */
    {
        front = rear = 0;
        arr[rear] = value;
    }
 
    else if (rear == size-1 && front != 0)
    {
        rear = 0;
        arr[rear] = value;
    }
 
    else
    {
        rear++;
        arr[rear] = value;
    }
}
int display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int pop()
{
   if (front == -1)
    {
        printf("\nQueue is Empty");
        return INT_MIN;
    }
 
    int data = arr[front];//10,20,30,40,50
    arr[front] = -1;//a[0]=-1
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == size-1)
        front = 0;
    else
        front++;//1,2,3,4
 
    cout<<data;
}
int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	display();
   cout<<"\nrear"<<rear<<"front"<<front<<"\n";
   //r4,f=0,s=5
	pop();
	pop();
	pop();
	pop();
	pop();
	push(10);
	display();
}

