#include<iostream>
using namespace std;

int main(){
	int a=10;
	int b=20;
	cout<<"A : "<<a<<endl;
	cout<<"B : "<<b<<endl;
	a+=b;
	b=a-b;
	a-=b;
	cout<<"After swapping"<<endl;
	cout<<"A : "<<a<<endl;
	cout<<"B : "<<b<<endl;
	
	return 0;
}