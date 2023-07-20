#include<iostream>
using namespace std;
int fib(int n)
{
	//base conditions
	if(n==0)
	return 0;
	
	if(n==1)
	return 1;
//self work
	
   long	long int res=fib(n-1)+fib(n-2);
	return res;
}
int main()
{
   long	long int ans=fib(95);
	cout<<ans;
}
