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
        int a; cin>>a;
        vi v1, v2;
        for(int i=0; i<a; i++){
            int b; cin>>b;
            v1.eb(b);
        }
        for(int i=0; i<a; i++){
            int c; cin>>c;
            v2.eb(c);
        }
        sort(v1.begin(), v1.end());
        sort(v2.rbegin(), v2.rend());
        vi result;
        for(int i=0; i<a; i++){
            result.eb(v1[i]+v2[i]);
        }
        int flag=0;
        for(int i=1; i<a; i++){
            if(result[i]!=result[i-1]){
                flag=1;
                break;
            }
        }
        
        if(flag){
            cout<<-1;
        }
        else{
            for(auto it:v1){
                cout<<it<<" ";
            }
            cout<<endl;
            for(auto it:v2){
                cout<<it<<" ";
            }
            
        }
        cout<<endl;


    }
    

    return 0;
}