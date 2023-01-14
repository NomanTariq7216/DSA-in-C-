#include<iostream>
using namespace std;
int main ()
{
	int N,div=2,chk=0;
	cout<<"Enter the num = ";  cin>>N;
	for (int i=2; i<N; i++)
	{
		if (N%i==0)
		{
			cout<<"Num is not prime";
			chk++;
			break; 
		}
	}
	if (chk==0)
	{
		cout<<"Num is prime";
	}
}
