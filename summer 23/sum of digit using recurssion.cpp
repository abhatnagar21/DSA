#include<iostream>
using namespace std;
int num(int x)
{
	if(x<10)
	return x;

    int sum=x%10;
    x=x/10;
    int res=sum+num(x);
    return res;
}
int main()
{
	int q=num(124764747);
	cout<<q;
}
