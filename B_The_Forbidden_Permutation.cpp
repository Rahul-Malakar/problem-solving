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
        int a,b,c; cin>>a>>b>>c;
        vi nv;
        vector<pair<int,int>> v;
        map<int,int> m;
        for(int i=0; i<a; i++){
            int d; cin>>d;
            v.eb(make_pair(d,i));
            m[d]++;
        }
        int flag=0;
        for(auto it:m){
            if(it.second>1){
                cout<<0<<endl;
                flag=1;
            }
        }
        if(flag){
            continue;
        }

        for(int i=0; i<b; i++){
            int e; cin>>e;
            nv.eb(e);
        }
        
        vi vind;
        sort(v.begin(),v.end());
        for(int i=0 ; i<nv.size(); i++){
            vind.eb(v[nv[i]-1].second);
        }

        int mind=INT_MAX;
        for(int i=0; i<vind.size()-1; i++){
            if(vind[i]>=vind[i+1] || vind[i]+c<vind[i+1]){
                flag=1;
                cout<<0<<endl;
            }
        }
        if(flag){continue;}
        int maxi=0;
        for(int i=0; i<vind.size()-1; i++){
            if(vind[i+1]-vind[i]>maxi){
                if((vind[i]+c)-(vind[i+1]-1) <=(a-1-vind[i+1])+(vind[i]-1)){
                    mind=(vind[i]+c)-vind[i+1]-1;
                }
                else{
                    mind = vind[i+1]-vind[i];
                }
            }
            
        }
        cout<<mind<<endl;
        

    }

    return 0;
}