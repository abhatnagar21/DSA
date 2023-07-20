//int a=[12,45,32,34,36,38,40,43,67,54]
#include<iostream>
#include<vector>
using namespace std;
int main()
{

vector<int> ans;
	int arr[8]={12,45,32,35,37,65,76,43};
	int i=0;
    int j=i+1;
    int x=arr[j]-arr[i];
    int y=arr[j+1]-arr[i+1];
    while(x!=y)
    {
    	i++;
	}
	if(x==y)
	{
		ans.push_back(arr[i]);
		i++;
	}
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
    
}
