#include <bits/stdc++.h>
using namespace std;

int barbar(int tot)
{
	int sum=0;
	while(tot>0){
		sum+=tot%10;
		tot/=10;
	}
	return sum;
}

int main()
{
	string s;
	cin >> s;
	int sum = 0;
	if (s.size()==1)
	{
		cout<<0<<endl;
		return 0;
	}

	for (int i = 0; i < s.size(); i++)
	{
		sum += s[i] - '0';
	}
	if (sum <10)
	{
		cout<<1<<endl;
	}
	else
	{
		int count=1;
		while(sum>9){
			count++;
			sum = barbar(sum);
		}
		cout<<count<<endl;

	}
	return 0;
}