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
#define sortd(v) sort(v.rbegin(), v.rend())

int main()
{
    
    freopen("teleport.in", "r", stdin);
	freopen("teleport.out", "w", stdout);

    int a,b,c,d; cin>>a>>b>>c>>d;

    int lc = min(a,b);
    int rc = max(a,b);

    int actual = rc-lc; 

    int left = min(c,d);
    int right = max(c,d);
    int tele = abs(lc-left) + abs(right-rc);

    

    cout<<min(actual,tele);

    return 0;
}
