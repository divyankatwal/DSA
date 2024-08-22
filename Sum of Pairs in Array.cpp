#include<iostream>
using namespace std;

void Pair(int A[],int n)
{
	int i=0,j=n-1,sum=15;
	do
	{			
       	if(A[i]+A[j]==sum)
		{
		  cout<<"("<<A[i]<<","<<A[j]<<")"<<" ";
		  i++;
		  j--;
	    }
	    else if(A[i]+A[j]>sum) j--;
	    else i++;
    }while(i<j);
}

int main()
{
	int A[10]={1,3,4,5,6,8,9,10,12,14};
	int n=10;
	Pair(A,n);
	
	return 0;
}
