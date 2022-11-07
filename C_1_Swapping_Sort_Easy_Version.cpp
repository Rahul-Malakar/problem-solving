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
        int n;
        cin >> n;
        int flag = 0;
        vector<int> v;
        v.emplace_back(0);
        for(int i=0; i<n; i++){
            int a; cin>>a;
            v.emplace_back(a);
        }
        int sume=0, sumo=0;
        int sumve=0, sumvo=0;
        for(int i=1; i<n; i+=2){
            sumo+=i;
            sumvo+=v[i];
        }
        for(int i=2; i<n; i+=2){
            sume+=i;
            sumve+=v[i];
        }
        if(sume==sumve && sumo==sumvo){
            for(auto it:v){
                cout<<it;
            }
            cout<<endl;
        }   
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}