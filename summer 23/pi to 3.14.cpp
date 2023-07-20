#include<iostream>
using namespace std;
void replace(string s)
{
	if(s.length()==0)
	{
		return;
	}
	if(s[0]=='p' && s[1]=='i')
	{
		cout<<"3.14";
	replace(s.substr(2));
	}
	else{
		cout<<s[0];
		s=s.substr(1);
		replace(s);
	}
	
}
int main()
{
	string x="piuhdgupiduegpi";
	replace(x);
}
