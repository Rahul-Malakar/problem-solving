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
        ll n; cin>>n;
        ll arr[n]={0};
        
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr,arr+n);
        
        for(ll i=0; i<n-1; i++){
            if(arr[i]==arr[i+1]){
                arr[i]=0;
            }
        }
        ll count=0;
        for(auto it:arr){
            if(it!=0){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}