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

#define forl(i, n) for (int i = 0; i < n; i++)
#define forle(i, n) for (int i = 0; i <= n; i++)

#define sorti(v) sort(v.begin(), v.end())

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    forl(i, t)
    {
        int a;
        cin >> a;
        int maxi = 0;
        vector<int> v, ans;
        int hc = 0;
        for (int i = 0; i < a; i++)
        {
            int b;
            cin >> b;
            v.eb(b);
            maxi = max(maxi, b);
        }
        vi num(maxi + 1, 0), hcr(maxi + 1, 0);
        for (int i = 0; i < a; i++)
        {
            num[v[i]]++;
        }
        int flag=0;
        for(int i=2; i<maxi+1; i++){
            if(num[i]%i!=0){
                cout<<-1<<endl;
                flag=1;
                break;
            }
        }
        if(flag){
            continue;
        }
        for (int i = 0; i < a; i++)
        {
            if (num[v[i]] % v[i] == 0)
            {
                hc++;
                hcr[v[i]] = hc;
                ans.eb(hcr[v[i]]);
                num[v[i]]--;
            }
            else{
                ans.eb(hcr[v[i]]);
                num[v[i]]--;
            }
        }
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }

    return 0;
}