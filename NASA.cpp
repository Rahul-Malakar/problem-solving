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

vector<int> pal;

void pal(vector<int> v){
    int maxi = 1<<15;
    for(int i=0; i<=maxi; i++){
        string num = to_string(i);
        revstr = num;
        sort(rev.rbegin(), rev.rend());
        if(revstr==num){
            pal.emplace_back(i);
        }
    }
}

int main()
{
    
    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    while(t--)
    {
        int n; cin>>n;
        vi v;
        for(int i=0; i<n; i++){
            int a; cin>>a;
            v.eb(a);
        }
        
    }

    return 0;
}