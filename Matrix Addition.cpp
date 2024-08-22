#include<iostream>
using namespace std;
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,m,n;
	
	cout<<"Enter no. of rows and columns : ";
	cin>>m>>n;
	
	cout<<endl<<"Enter the first matrix : ";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		cin>>a[i][j];
	    }
	}
	cout<<endl<<"Enter the second matrix : ";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		cin>>b[i][j];
	    }
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
	    }
	}
	cout<<endl<<"Matrix A : "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		cout<<a[i][j]<<" ";
	    }
	    cout<<endl;
	}
	cout<<endl<<"Matrix B : "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		cout<<b[i][j]<<" ";
	    }
	    cout<<endl;
	}
	cout<<endl<<"Matrix C=A+B : "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		cout<<c[i][j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}