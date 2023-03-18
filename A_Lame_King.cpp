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
        int a,b; cin>>a>>b;
        int mini = min(abs(a),abs(b));
        int maxi=0;
        if(mini==abs(a)){
            maxi=abs(b);
        }
        else{
            maxi=abs(a);
        }
        int ans=mini*2;
       
        int cut = 2*(maxi-mini) -1;
        ans+=cut;
        if(abs(a)==abs(b)){
            cout<<2*abs(a)<<endl;
        }
        else{
            cout<<ans<<endl;
        }

    }

    return 0;
}