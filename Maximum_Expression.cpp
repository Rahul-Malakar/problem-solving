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
        vector<char> vsign, v;
        for(int i=0; i<a; i++){
            char b; cin>>b;
            if(b=='-'){
                vsign.emplace_back('-');
            }
            else if(b=='+'){
                vsign.emplace_back('+');
            }
            else{
                v.emplace_back(b);
            }
        }
        sort(vsign.rbegin(), vsign.rend());
        sort(v.begin(), v.end());

        int voro=1;
        int sz=vsign.size();
        int k=0;

        while(sz>0){
            v.insert(v.begin()+voro, vsign[k]);
            sz--;
            k++;
            voro+=2;
        }

        for(int i=a-1; i>=0; i--){
            cout<<v[i];
        }
        cout<<endl;
        
    }

    return 0;
}