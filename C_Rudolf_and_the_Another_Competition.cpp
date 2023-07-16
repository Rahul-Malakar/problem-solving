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
        int n, m, h;
        cin >> n >> m >> h;
        int ans=1;
        

        pair<int, int> hiscount = {0, 0};

        for (int i = 0; i < n; i++)
        {
            vector<int> times;
            for (int i = 0; i < m; i++)
            {
                int time;
                cin >> time;
                times.emplace_back(time);
            }
            sort(times.begin(), times.end());
            for (int i = 1; i < m; i++)
            {
                times[i] = times[i] + times[i - 1];
            }

            pair<int, int> curcount = {0, 0};

            if (i == 0)
            {
                for (auto it : times)
                {
                    if (it <= h)
                    {
                        hiscount.first++;
                        hiscount.second += it;
                    }
                }
            }
            else{
                for (auto it : times)
                {
                    if (it <= h)
                    {
                        curcount.first++;
                        curcount.second += it;
                    }
                }
                // cout<<curcount.second<<endl;
                if(curcount.first>hiscount.first){
                    ans++;
                }
                else if(curcount.first==hiscount.first){
                    if(curcount.second<hiscount.second){
                        ans++;
                        
                    }
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}