#include<iostream>
using namespace std;
int main()
{
	int n,num,t,i;
	cout<<"number of element in array";
	cin>>n;
	int A[n];
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<"enter the number to be deleted:";
	cin>>num;
	for(i=0;i<n;i++)
	{
		if(A[i]==num)
		{
			t=i;
		}
	}
	for(i=t;i<n;i++)
	{
		A[i]=A[i+1];
	}
	n=n-1;
	for(i=0;i<n;i++)
	{
		cout<<A[i];
	}
	return 0;
}
