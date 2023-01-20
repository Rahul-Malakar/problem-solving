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


int main()
{
    
    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    while(t--)
    {
        string s; cin>>s;
        int totsum=0, totesum=0, ans=0;
        for(auto it:s){
            if(it=='('){
                totsum++;
                
            }
            else if(it=='['){
                totesum++;
                
            }
            else if(it==')'){
                if(totsum>0){
                    totsum--;
                    ans++;
                }
            }
            
            else if(it==']'){
                if(totesum>0){
                    totesum--;
                    ans++;
                }
            }
        }
        
        cout<<ans<<endl;
    }

    return 0;
}