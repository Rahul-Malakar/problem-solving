// https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?update=google&purpose=login&source=problem-page&fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE


#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin>>n;
	map<int, multiset<string>> m;
	for(int i=0; i<n; i++){
		string s; cin>>s;
		int a; cin>>a;
		m[a].insert(s);
	}
	auto it=--m.end();
	while(true){
		auto &names = (*it).second;
		int marks = (*it).first;
		for(auto ite:names){
			cout<<ite<<" "<<marks<<endl;
		}
		if(it==m.begin())break;
		it--;
	}
	return 0;
}