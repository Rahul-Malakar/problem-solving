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
        string s; cin>>s;
        pair<char,int> pr;
        pr.first = '{';
        pr.second = INT_MAX;

        for(int i=a-1; i>=0; i--){
            
            if(s[i]-'0'<pr.first-'0'){
                
                pr.first=s[i];
                pr.second=i;
            }
        }
        s.erase(pr.second,1);
        string ans = pr.first+s;
        cout<<ans<<endl;
        
    }

    return 0;
}