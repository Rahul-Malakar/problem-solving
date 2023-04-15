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
    for(int iter=1; iter<=t; iter++)
    {
        int n;
        cin >> n;
        map<int, vector<int>> m;
        vector<int> st;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            st.emplace_back(a);
            m[a].emplace_back(i);
        }
        int flag=0;
        for (auto it : m)
        {
            if (it.second.size() == 1)
            {
                continue;
            }
            else
            {
                for (int i = 1; i < it.second.size(); i++)
                {
                    if(it.second[i]-it.second[i-1]!=1){
                        flag=1;
                        break;
                    }
                }
                if(flag){
                    break;
                }
            }
        }
        if(flag){
            cout<<"Case #"<<iter<<": IMPOSSIBLE"<<endl;
        }
        else{
            cout<<"Case #"<<iter<<": ";
            cout<<st[0]<<" ";
            for(int i=1; i<st.size(); i++){
                if(st[i]!=st[i-1]){
                    cout<<st[i]<<" ";
                }
            }
            cout<<endl;
        }
    }

    return 0;
}