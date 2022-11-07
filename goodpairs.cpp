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
        int n; cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++){
            int a; cin>>a; v.emplace_back(a);
        }

        sort(v.begin(), v.end());
        int ans=0;
        int count=1;
        for(int i=1; i<n; i++){
            
            if(v[i]==v[i-1]){
                count++;
                if(i==n-1){
                    ans+=(count*(count-1))/2;
                    cout<<ans<<endl;
                    break;
                }
            }
            else{
                ans+=(count*(count-1))/2;
                count=1;

            }
        }
        cout<<ans<<endl;
    }

    return 0;
}