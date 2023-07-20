//int a=[21,34,56,10,20,30,40,50,60,70]
//int b=[12,10,20,30,70,89,89]
#include<iostream>
using namespace std;
int main()
{
	int a[]={21,34,56,10,20,30,40,50,60,70};
	int b[]={12,10,20,30,70,89,89};
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<7;j++)
		{
			if(b[j]==a[j])
			{
				if(b[j+1]==a[j+1])
				{
					cout<<b[j]<<" ";
					j++;
				}
			}
		}
	}
}
