#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of elements in array:";
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<"traversing array"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<"";
			}
			return 0;
			}
