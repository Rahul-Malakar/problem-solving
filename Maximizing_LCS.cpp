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
        int a; cin>>a;
        string s; cin>>s;
        string s2=s;
        reverse(s.begin(), s.end());
        vector<vector<int>> v(a+1, vector<int>(a+1,0));
        for(int i=1; i<=a; i++){
            for(int j=1; j<=a; j++){
                if(s[j-1]!=s2[i-1]){
                    v[i][j]=max(v[i][j-1], v[i-1][j]);
                }
                else{
                    v[i][j]=v[i-1][j-1];
                }

            }
        }
        int ans = v[a][a]/2;
        cout<<ans<<endl;
    }

    return 0;
}