// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int N, T1, T2, K;
int S[1000][2];
int main() {
  cin >> N >> T1 >> T2 >> K;
  for (int i = 0; i < N; i++) cin >> S[i][0] >> S[i][1];
 
  vector<pair<int,int> > V;
  for (int i = 0; i < N; i++) {
    int b = max( S[i][0] * T1 * (100 - K) + S[i][1] * T2 * 100,
		 S[i][0] * T2 * 100 + S[i][1] * T1 * (100 - K));
    V.push_back(make_pair(-b, i+1));
  }
  sort(V.begin(), V.end());
  for (int i = 0; i < V.size(); i++) {
    int k = -V[i].first;
    printf("%d %d.%02d\n", V[i].second, k/100, k%100);
  }
}