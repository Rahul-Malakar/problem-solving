#include <bits/stdc++.h>
 
using namespace std;

int main() {
    int vp, vd, t, f, c, ans;
    double s;
    cin >> vp >> vd >> t >> f >> c;
 
    if (vd <= vp) {
        printf("%d\n", 0);
        return 0;
    }
 
    s = vp * t;
 
    for (ans = 0;; ++ans) {
        s += vp * s / (vd - vp);
        if (s >= c) break;
        s += vp * (s / vd + f);
    }
 
    printf("%d\n", ans);
    return 0;
}