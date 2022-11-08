#include<iostream>
using namespace std;
int main()
{
	int n,num,i;
	cout<<"number of element in array\n:";
	cin>>n;
	int A[n];
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<"enter the index at which you want to insert :";
	cin>>num;
	n=n+1;
	for(i=n-2;i>=num;i--)
	{
		A[i+1]=A[i];
	}
	cout<<"enter the number that you want to insert:\n";
	cin>>A[num];
	for(i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	return 0;
	
}
