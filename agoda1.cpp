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
    string s;
    getline(cin,s);
    vector<string> vs;
    ll t;
    cin >> t;
    while(t--)
    {
        string q; cin>>q;
        if(q=="COPY" || q=="CUT"){
            int a, b; cin>>a>>b;
            vs.emplace_back(s.substr(a-1,b-a+1));
            if(q=="CUT"){
                s.erase(a-1,b-a+1);
            }
            
        }
        else{
            int c; cin>>c;
            s.insert(c-1,vs.back());
            vs.pop_back();
            
        }

    }
    cout<<s;

    return 0;
}