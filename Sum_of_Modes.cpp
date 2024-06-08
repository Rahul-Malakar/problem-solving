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
        string s; cin>>s;
        int ans = (n*(n+1))/2;
        for(int i=0; i<n-1; i++){
            int cur = 1;
            if(s[i]=='0'){
                cur = -1;
            }
            for(int j=i+1; j<n; j++){
                if(s[j]=='0'){
                    cur--;
                }
                else{
                    cur++;
                }
                if(cur == 0){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}

