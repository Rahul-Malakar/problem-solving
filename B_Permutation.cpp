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
        vector<int> v1, v2;

        for(int i=1; i<=a; i++){
            if(floor(log2(i)==ceil(log2(i)))){
                v1.emplace_back(i);
            }
            else{
                v2.emplace_back(i);
            }
        }
        cout<<2<<endl;
        for(auto it:v1){
            cout<<it<<" ";
        }
        for(auto it:v2){
            cout<<it<<" ";
        }
        cout<<endl;
    }

    return 0;
}