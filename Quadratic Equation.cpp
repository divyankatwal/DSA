#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,D,x,y,flag;
	
	cout<<"We have a quadratic equation : ax^2+bx+c=0 ";
	cout<<endl<<"Please enter value of a b & c : ";
	cin>>a>>b>>c;
	
	D=pow(b,2)-4*a*c;
	
	if(D>0)
	{
		flag=1;
	}
	else if(D==0)
	{
		flag=2;
	}
	else
	{
		flag=3;
	}
	switch(flag)
	{
		case 1: cout<<endl<<"There will be two distinct roots";break;
		case 2: cout<<endl<<"There will be two equal roots";break;
		case 3: cout<<endl<<"There will be two imaginary roots";break;
	}
	
	x=(-1*b+sqrt(D))/2*a;
	y=(-1*b-sqrt(D))/2*a;
	
	cout<<endl<<"The two roots would be : "<<x<<" & "<<y;
	
	return 0;
}