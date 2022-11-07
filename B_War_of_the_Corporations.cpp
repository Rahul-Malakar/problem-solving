#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
	string s, t; cin >> s >> t;
	int n = s.length(), m = t.length();
	int cnt = 0;
	for (int i = 0; i + m <= n; i++)
		if (s.substr(i, m) == t) {
			s[i + m - 1] = '#';
			cnt++;
		}
	cout << cnt << endl;
}