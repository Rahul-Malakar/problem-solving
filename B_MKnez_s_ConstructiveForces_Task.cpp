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
        ll n;
        cin >> n;
        if (n & 1)
        {
            if(n/2>1){
                cout<<"YES"<<endl;
                int first = n/2-1, sec = -n/2;
                for(int i=0; i<n/2; i++){
                    cout<<first<<" "<<sec<<" ";
                }
                cout<<first<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
            for (ll i = 0; i < n; i++)
            {
                if(i&1){
                    cout<<1<<" ";
                }
                else{
                    cout<<-1<<" ";
                }
            }
            cout<<endl;
        }
    }

    return 0;
}