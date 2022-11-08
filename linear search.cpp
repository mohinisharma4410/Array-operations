#include<iostream>
using namespace std;
int main()
{
int n,i,num,count;
	cout<<"number of element in array";
	cin>>n;
	int A[n];
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<"enter the number to be searched:";
	cin>>num;
	for(i=0;i<n;i++)
	{
		if(A[i]==num)
		{
		  cout<<A[i]<<" is found at "<<i<<endl;
		  count=1;
		}
	}
if(count!=1)
{
	cout<<num<<"is not found";
}
	return 0;
}
