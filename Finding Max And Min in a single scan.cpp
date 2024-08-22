#include<iostream>
using namespace std;

void MaxMin(int A[])
{
	int max=6,min=6;
	for(int i=1;i<10;i++)
	{
		if(A[i]>max)
		max=A[i];
		else if(A[i]<min)
		min=A[i];
	}
	cout<<"Maximum : "<<max<<" & Minimum :"<<min;
}

int main()
{
	int A[10]={6,3,8,10,16,7,5,2,9,14};
	MaxMin(A);
	
	return 0;
}