#include<bits/stdc++.h>
using namespace std;
void call_by_refvariable(int& n)
{
	cout<<"address of n:"<<&n<<endl;
	n*=n;
	
	}	
int main()
{
	int n=8;
	cout<<"address of n in main:"<<&n<<endl;
	call_by_refvariable(n);
	cout<<"ans:"<<n<<endl;
	cout<<"value of n: "<<n<<endl;
	

	return 0;
}
