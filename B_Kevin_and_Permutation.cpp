//RAHUL MALAKAR 2112022

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
        int a; cin>>a;
        // vector<int> vless, v;
        // for(int i =1; i<=a; i++){
        //     if(i<=(a/2)){
        //         vless.emplace_back(i);
        //     }
        //     else{
        //         v.emplace_back(i);
        //     }
        // }
        // for(int i=0; i<vless.size(); i++){
        //     cout<<v[i]<<" ";
        //     cout<<vless[i]<<" ";
            
        // }
        // if(a&1){
        //     cout<<v[v.size()-1]<<endl;
        // }
        // else{
        //     cout<<endl;
        // }

        int start=a/2;
        for(int i=0; i<a-1; i++){
            cout<<start<<" ";
            if(i%2==0){
                start+=a/2;
            }
            else{
                start-=(a/2)+1;
            }
        }
        if(a&1){
            cout<<a<<endl;
        }
        else{
            cout<<(a/2)+1<<endl;
        }

    }

    return 0;
}