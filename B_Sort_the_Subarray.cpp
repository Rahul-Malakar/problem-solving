#include <bits/stdc++.h>
using namespace std;
 
int main () {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int& x: a) cin >> x;
    for (int& x: b) cin >> x;
    int l = n;
    int r = -1;
    for (int i = 0; i < n; i++) {
      if (a[i] != b[i]) {
        l = min(l, i);
        r = max(r, i);
      }
    }
    while (r+1 < n && b[r] <= b[r+1]) r++;
    while (l-1 >= 0 && b[l-1] <= b[l]) l--;
    cout << l+1 << ' ' << r+1 << '\n';
  }
}