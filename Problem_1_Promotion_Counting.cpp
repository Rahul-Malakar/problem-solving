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

    freopen("promote.in", "r", stdin);
	freopen("promote.out", "w", stdout);
    
    ios_base::sync_with_stdio(false);
    vector<pair<int,int>> v;
    for(int i=0; i<4; i++){
        int a,b; cin>>a>>b;
        v.push_back({a,b});
    }

    for(int i=0; i<3; i++){
        int before = 0;
        int after = 0;
        for(int j=i+1; j<4; j++){
            before+= v[j].first;
            after+= v[j].second;
        }
        cout<<after - before<<endl;
    }

    return 0;
}
