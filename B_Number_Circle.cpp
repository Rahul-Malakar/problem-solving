//RAHUL MALAKAR 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

#define sp setprecision
#define eb emplace_back

#define vi vector<int>
#define vll vector<long long>
#define si set<int>
#define sll set<int>

#define sorti(v) sort(v.begin(), v.end())

const int N = 1000001;
int n,m;
int x[N];
int main(void){
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", x+i);
   
	sort(x, x+n, greater<int>());
	if(x[0]<x[1]+x[2]) {
		printf("YES\n");
		printf("%d", x[0]);
		for(int i=2; i<n; i++) printf(" %d", x[i]);
		printf(" %d", x[1]);
	} else {
		printf("NO");
	}
}