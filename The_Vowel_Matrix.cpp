// RAHUL MALAKAR 2112022

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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        ll countv = 0, countc = 0;
        ll flag = 0;
        vi cons;

        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                countv++;
            }
            if (countv % k == 0)
            {
                while(s[i+1]!='a' &&  s[i+1]!='e' && s[i+1]!='i' && s[i+1]!='o' && s[i+1]!='o'){
                    countc++;
                    i++;
                }
                
            }
            cons.eb(countc+1);
            countc=0;
            

        }
        ll ans=1;
        for(ll i=0; i<cons.size()-1; i++){
            ans*=cons[i];
            ans = ans % 1000000007;
        }
        cout<<ans<<endl;
    }

    return 0;
}