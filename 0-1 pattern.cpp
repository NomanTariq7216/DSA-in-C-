#include<iostream>
using namespace std;
int main ()
{
	int n,eo;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			eo=(i+j)%2;
			if(eo==0)
			{
				cout<<1<<" ";
			}
			else
			{
				cout<<0<<" ";
			}
		}
		cout<<endl;
	}
}
