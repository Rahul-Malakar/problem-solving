// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m=1;
		cin>>n;
		while(m*10<=n)
			m*=10;
		cout<<n-m<<endl;
	}
	return 0;
}