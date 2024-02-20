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
        string p,c;
        cin>>p;
        cin>>c;
        int initial = 0;
        vi v(n);
        for(int i=0; i<n; i++){
            if(p[i]>c[i]){
                initial = 26 - p[i] + c[i];
            }
            else{
                initial = c[i]-p[i];
            }

            if(initial%3 == 0){
                v[i] = initial/3;
            }
            else if(initial%3 == 1){
                v[i] = (initial+26)/3;
            }
            else if(initial%3 == 2){
                v[i] = (initial+26+26)/3;
            }
        }
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;

    }
    

    return 0;
}