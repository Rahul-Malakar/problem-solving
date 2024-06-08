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

    ios_base::sync_with_stdio(false);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll least = INT_MAX;
        ll ans = 1;
        ll flag=0;
        vector<ll> v1(n,0);
        vector<ll> v2(n+1,0);
        for (ll i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> v2[i];
            ans += abs(v2[i] - v1[i]);
        }
        cin>>v2[n];
        for (ll i = 0; i < n; i++)
        {
            
            if (v2[n] >= min(v1[i], v2[i]) && v2[n] <= max(v1[i], v2[i]))
            {
                flag = 1;
                break;
            }
            least = min(least, abs(v1[i] -v2[n]));
            least = min(least, abs(v2[i] -v2[n]));

        }
        if(!flag){
            ans+=least;
        }
        cout<<ans<<endl;
    }

    return 0;
}
