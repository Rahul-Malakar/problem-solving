//RAHUL MALAKAR 2112022

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
    while(t--)
    {
        int a; cin>>a;
        int ans=0;
        vi v;
        for(int i=0; i<a; i++){
            int b; cin>>b; v.eb(b);
            ans^=b;
        }
        int news=0;
        for(int i=0; i<a; i++){
            v[i]^=ans;
        }
        for(int i=0; i<a; i++){
            news^=v[i];
        }
        if(news==0){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }

        



    }

    return 0;
}