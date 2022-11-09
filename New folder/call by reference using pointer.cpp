#include<iostream>
using namespace std;
void callbyreference(int *n)
{
	cout<<"address of n:"<<&n<<endl;
	*n *=*n;
	
	}	
int main()
{
	int n=8;
	cout<<"address of n in main:"<<&n<<endl;
	callbyreference(&n);
	cout<<"ans:"<<n<<endl;
	cout<<"value of n: "<<n<<endl;
	return 0;
}
