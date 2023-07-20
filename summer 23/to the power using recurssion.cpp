#include<iostream>
using namespace std;
int sq(int x,int v)
{//base condition
	if(v==0)
	return 1;
	
	//self work
	int ans=1;
	ans=x*sq(x,v-1);
	return ans;
}
int main()
{
	int res=sq(3,3);
	cout<<res;
}
