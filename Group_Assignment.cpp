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
        int a; cin>>a;
        set<int> st;
        vector<int> v;
        for(int i=0; i<a; i++){
            int b; cin>>b;
            v.emplace_back(b);
            st.insert(b);
        }

        vector<int> v2{st.begin(), st.end()};
        
        int flag=0;
        for(int i=0; i<v2.size(); i++){
            int sum=0;
            
            for(int j=0; j<v.size(); j++){
                if(v2[i]==v[j]){
                    sum++;
                }
            }
            if(sum%v2[i]!=0){
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        if(!flag){
            cout<<"YES"<<endl;
        }

    }

    return 0;
}