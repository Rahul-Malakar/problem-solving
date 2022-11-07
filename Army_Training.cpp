// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll a; cin>>a;
        ll at=0, def=0;
        vector<ll> v;
        for(ll i=0; i<a; i++){
            ll b; cin>>b;
            v.emplace_back(b);
        }
        sort(v.begin(), v.end());
        // for(auto it:v){
        //     cout<<it;
        // }
        // cout<<endl;
        at+=v[a-1]; def+=1000-v[0];
        
        ll ulta=a-2;
        while(ulta>0){

            if(at==def){
                if(v[ulta]>=500){
                    at+=v[ulta];
                    ulta--;
                }
                else{
                    def+=(1000-v[ulta]);
                    ulta--;
                }
            }

            else if(abs((at+v[ulta])-def)>abs((def+(1000-v[ulta]))-at)){
                def+=1000-v[ulta];
                ulta--;
                
            }
            else{
                at+=v[ulta];
                ulta--;
                
            }
            
        }
        cout<<def*at<<endl;

        
    }

    return 0;
}