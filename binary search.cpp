#include<iostream>
using namespace std;
int main()
{
	int arr[6]={1,2,3,4,5,6};
	int low,high,x,i,mid;
	low=arr[1];
	high=arr[6];
	for(i=low;i<high;i++)
	{
		mid=(low+high)/2;
		if(x==arr[mid])
		{
			return mid;
		}
		else if(x>arr[mid])
		{
			low=mid+1;
		}
		else
		high=mid-1;
	}
	
	return 0;
}
