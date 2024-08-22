#include<iostream>
using namespace std;

int pow(int m, int n)
{
	if(n==0)
	return 1;
	else
	return pow(m,n-1)*m;
}
int main()
{
	int x,y;
	cout<<"Enter the no. to find power of : ";
	cin>>x;
	cout<<endl<<"Enter the power : ";
	cin>>y;
	
	cout<<endl<<pow(x,y);
}