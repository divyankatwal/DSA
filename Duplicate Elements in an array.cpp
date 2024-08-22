#include<iostream>
using namespace std;

void Duplicate(int A[],int H[])
{
	int i;
	for(i=0;i<13;i++)
	   H[A[i]]++;
	for(i=1;i<13;i++)
	{
		if(H[i]>1)
		cout<<i<<" Repeated "<<H[i]<<" times "<<endl;
	}
}

int main()
{
	int A[13]={12,12,12,2,2,4,3,3,8,9,10,10,11};
	int H[13]={0};
	cout<<"Duplicates are : "<<endl;
	Duplicate(A,H);
	
	
	return 0;
}
