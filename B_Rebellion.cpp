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


#define forl(i,n) for(int i=0; i<n; i++)
#define forle(i,n) for(int i=0; i<=n; i++)

#define sorti(v) sort(v.begin(), v.end())


int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    forl(i,t)
    {
        ll a; cin>>a;
        vi v;
        ll count=0;
        forl(i,a){
            ll b; cin>>b;
            v.eb(b);
        }
        int j=0, k=v.size()-1;
        while(j<k){
            if(v[k]==0){
                if(v[j]==1){
                    count++;
                    j++;
                    k--;
                }
                else{
                    j++;
                }
            }
            else{
                if(v[j]==1){
                    k--;
                    
                }
                else{
                    j++;
                    k--;
                }
            }
        }
        cout<<count<<endl;
        
    }

    return 0;
}