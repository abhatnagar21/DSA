#include<iostream>
using namespace std;
int main()
{
	int arr[10]={1,4,6,8,9,10,23,56,76,98};
	int i=0;
	int end=9;
	int mid;
	int ans=-1;
	int target=56;
	
	while(i<=end)
	{
		mid=(i+end)/2;
		if(target>arr[mid])
		{
			i=mid+1;
		}
		else if(target<arr[mid]){
			end=mid-1;
			
		}
		else{
			cout<<mid;
			break;
		}
	}
	
}
