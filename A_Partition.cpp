#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  
  ll n, k; cin >> n >> k;
	vector<ll> a(n);
	for(int i=0; i<n; i++){
	  cin>>a[i];
	}
	if (k <= 0) {
		sort(a.rbegin(), a.rend());
		ll sum = 0;
		for(auto it: a){
			  sum+=it;
			}
		if (sum >= k) {
			cout << "Yes\n";
			for(auto it: a){
			  cout<<it<<" ";
			}
		}
		else {
			cout << "No\n";
		}
	}
	else {
		sort(a.begin(), a.end());
		cout << "Yes\n";
		for(auto it: a){
			  cout<<it<<" ";
			}
	}
  
  return 0;
}