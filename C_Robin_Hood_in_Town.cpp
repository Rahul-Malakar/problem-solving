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
    long long t; cin>>t;
    while(t--){
        long long n; cin>>n;
        vector<long long> v(n);
        for(long long i=0; i<n; i++){
            cin>>v[i];
        }
        if(n<=2){
            cout<<-1<<endl;
            continue;
        }
        sort(v.begin(), v.end());
    
        long long sum = accumulate(v.begin(), v.end(),0LL);
        long long elegreater = v[n/2];
        long long ans = (n*2*elegreater + 1) - sum;
        cout<<max(0LL,ans)<<endl;
    }

    return 0;
}