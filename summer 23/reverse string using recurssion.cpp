#include<iostream>
using namespace std;
char reverse(string s)
{
	/*if(s.length()==0)
	{
		return ;
	}*/
	string r=s.substr(1);
	reverse(r);
	return s[0];
}
int main()
{
	string g="binod";
	reverse(g);
	
}
