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
        int att1 =0, att2 =0, def1 =0, def2=0;

        for(int i=0; i<n; i++){
            int a; cin>>a;
            att1+=a;
        }
        for(int i=0; i<n; i++){
            int a; cin>>a;
            def1+=a;
        }
        for(int i=0; i<n; i++){
            int a; cin>>a;
            att2+=a;
        }
        for(int i=0; i<n; i++){
            int a; cin>>a;
            def2+=a;
        }

        if(att1>att2){
            if(def1>def2){
                cout<<"A"<<endl;
            }
            else{
                cout<<"DRAW"<<endl;
            }
        }
        else if(att1<att2){
            if(def1<def2){
                cout<<"P"<<endl;
            }
            else{
                cout<<"DRAW"<<endl;
            }
        }
        else{
            cout<<"DRAW"<<endl;
        }
    }
    

    return 0;
}

