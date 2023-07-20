#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5,6,5,4,3,56,76};
	int i=0;
	int j=10;
	while(i<10 &&j>=0)
	{
		if(a[i]==a[j])
		{
			cout<<a[i]<<" ";
			//cout<<a[j]<<" ";
			i++;
			j--;
		}
		else{
			i++;
			j--;
		}
	}
}
