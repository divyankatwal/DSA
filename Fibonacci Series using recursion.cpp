#include<iostream>
using namespace std;

int fib(int n)
{
	static int a=0,b=1,c;
	
	if(n<3)
	{
		cout<<a<<" "<<b<<" ";
	}
	else
	{
		fib(n-1);
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
}

int main()
{
	fib(15);
}