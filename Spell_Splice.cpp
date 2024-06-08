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
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            cin>>v[i];
        }
        int maxi = 0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int cur = (a[i]*v[j]) + (v[i]*a[j]);
                maxi = max(cur, maxi);
            }
        }
        cout<<maxi<<endl;
    }

    return 0;
}

