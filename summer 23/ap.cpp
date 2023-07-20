#include<iostream>
using namespace std;
void reverse(string s)
{
	if(s.length()==0)
	{
		return;
	}
	string g=s.substr(1);
	reverse(g);
	cout<<s[0];
}
int main()
{
	string s="jason";
	reverse("jason");
}
