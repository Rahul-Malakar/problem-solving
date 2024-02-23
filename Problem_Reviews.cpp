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
    
    ll t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int flag=0;
        vi v;
        for(int i=0; i<n; i++){
            int a; cin>>a;
            v.eb(a);
        }
        for(int i=0; i<n; i++){
            if(v[i]<=4){
                
                flag=1;
                break;
            }
        }

        

        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    

    return 0;
}