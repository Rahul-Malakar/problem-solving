// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n,m,k;
    cin >> n;
    int R1 = 0;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        R1 = max(R1, x);
    }
    cin >> m;
    int P1 = 0;
    for(int i=0; i<m; i++) {
        int x;
        cin >> x;
        P1 = max(P1, x);
    }
    cin >> k;
    int P2 = 90000;
    for(int i=0; i<k; i++) {
        int x;
        cin >> x;
        P2 = min(P2, x);
    }
    int A, B;
    cin >> A >> B;
    printf("%.10lf\n", R1 * sqrt((double)(B * P1) / (double)(B * P1 + A * P2)));
    return 0;
}