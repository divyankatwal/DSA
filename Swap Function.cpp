#include<iostream>
using namespace std;

void swap(int *x ,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int x,y;
	x=10;
	y=20;
	swap(&x,&y);
	
	cout<<"X : "<<x<<endl;
	cout<<"Y : "<<y<<endl;
	
	
}