#include<iostream>
using namespace std;

int main()
{
	char A[]="medical";
	char B[]="decimal";
	long int H=0,x=0,i;
	
	for(i=0;A[i]!='\0';i++)
		H=1;
		H=H<<(A[i]-97);
	for(i=0;B[i]!='\0';i++)
	{
		x=1;
		x=x<<(B[i]-97);
		if((x&H)<1)
		{
		cout<<"Not an Anagram";
		break;
	}
	}
	if(B[i]=='\0')
	cout<<"It is an Anagram";
	
	return 0;
}