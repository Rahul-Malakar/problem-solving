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
        string s="";
        int flag=0;
        int ans=0;
        int first =0, sec =0;
        for(int i=0; i<a; i++){
            string b; cin>>b;
            if(b=="AB"){
                ans++;
            }
            if(b=="A"){
                first++;
            }
            if(b=="B"){
                sec++;
            }
            if(b=="O"){
                flag++;
            }
        }
        ans = max(ans+first, ans+sec);
        cout<<ans+flag<<endl;
        
        

    }

    return 0;
}