#include <bits/stdc++.h>
using namespace std;

int numberSum (int num) {
	int count = 0;
	while (num > 0) {
		count += num % 10;
		num /= 10;
	}
	return count;
}
 
int main () {
	string s;
	cin >> s;
	if (s.size() == 1) { 
		cout << "0"; 
		return 0;
	}
	int sum = 0;
	for (int i = 0; i < s.size(); ++i) {
		sum += s[i] - '0';
	}
    
	int count = 1;
	while (sum > 9) {
		sum = numberSum (sum);
		++count;
	}
 
	cout << count;
 
 
}