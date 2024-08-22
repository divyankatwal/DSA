#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	char a[]="I am new to this";
	char b[50];
	cout<<"This is the real array : "<<a;
	
	n=sizeof(a)-2;
	
	for(i=0,j=n;i<=n;i++,j--)
	{
		b[j]=a[i];	
	}
	b[n+1]='\0';
	cout<<endl<<"Reverse array is : "<<b;
	return 0;
}