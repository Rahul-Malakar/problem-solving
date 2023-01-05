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


#define forl(i,n) for(int i=0; i<n; i++)
#define forle(i,n) for(int i=0; i<=n; i++)

#define sorti(v) sort(v.begin(), v.end())

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      --a[i];
    }
    vector<int> cnt(n);
    vector<vector<int>> at(n);
    for (int i = 0; i < n; i++) {
      cnt[a[i]] += 1;
      at[a[i]].push_back(i);
    }
    vector<int> twos;
    vector<int> zeros;
    bool ok = true;
    for (int i = 0; i < n; i++) {
      if (cnt[i] == 0) {
        zeros.push_back(i);
      }
      if (cnt[i] == 2) {
        twos.push_back(i);
      }
      if (cnt[i] > 2) {
        ok = false;
        break;
      }
    }
    if (!ok) {
      cout << "NO" << '\n';
      continue;
    }
    auto p = a;
    auto q = a;
    int k = (int) twos.size();
    for (int i = 0; i < k; i++) {
      if (twos[i] < zeros[i]) {
        ok = false;
        break;
      }
      int v = twos[i];
      p[at[v][0]] = zeros[i];
      q[at[v][1]] = zeros[i];
    }
    if (ok) {
      cout << "YES" << '\n';
      for (int i = 0; i < n; i++) {
        cout << p[i] + 1 << " \n"[i == n - 1];
      }
      for (int i = 0; i < n; i++) {
        cout << q[i] + 1 << " \n"[i == n - 1];
      }
    } else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}