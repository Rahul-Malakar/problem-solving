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
        int a,b; cin>>a>>b;
        vi v;
        int count=0, ind=1;
        for(int i=0; i<a; i++){
            int c; cin>>c;
            
            v.eb(c);
            if(v[i]==ind){
                count++;
                ind++;
            }
        }
        int ans =0;
        if(count!=a){
            ans=a-count;
            if(ans%b==0){
                cout<<ans/b<<endl;
            }
            else{
                cout<<ans/b +1<<endl;
            }
        }
        else{
            cout<<ans<<endl;
        }

        
    }

    return 0;
}