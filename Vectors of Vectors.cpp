#include<iostream>
#include<vector>
using namespace std;

void Printvec(vector<int> v)
{
	cout<<"Size : "<<v.size () <<endl;
	for(int i=0;i<v.size () ;i++ )
	{
		cout<<v[i]<<" "<<endl;
	}
	cout<<endl;
}

int main()
{
	int N,i,j,n,x;
	cin>>N;
	vector<vector<int> > v;
	for(i=0;i<N;i++)
	{
		cin>>n;
		vector<int> temp;
		for(j=0;j<n;j++)
		{
			cin>>x;
			temp.push_back(x);
		}
		v.push_back(temp);
	}
	v[2].push_back(8);
	v[0].pop_back();
	v[2].pop_back();
	v[2].pop_back();
	for(i=0;i<v.size();i++)
	Printvec(v[i]);
	
	vector<int> :: iterator it=v[2].begin();
	cout<<endl<<"it : "<<*it;
	
}