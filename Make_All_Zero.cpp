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
        int a; cin>>a;
        if(a==1){
            cout<<1<<endl;
            continue;
        }
        vi v;
        for(int i=0; i<a; i++){
            int b; cin>>b;
            v.eb(b);
        }
        vector<int> st;
        st.push_back(v[a-1]);
        int ind = a-2;
        while(ind>=0){
            while(st[st.size()-1]>v[ind] && st.size()>0){
                // for(auto it:st){
                //     cout<<it<<" ";
                // }
                // cout<<endl;
                st.pop_back();
            }
            // cout<<ind<<"%";
            st.push_back(v[ind]);
            ind--;
        }
        int kata = 0;
        int maxi = 0;
        int lage = 0;
        // for(auto it:st){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        for(int i=st.size()-1; i>=0; i--){
            if((i+1 - st[i])>maxi){
                maxi = i+1 - st[i];
                kata = i+1;
                lage = st[i];
            }
        }
        cout<<lage+a-kata<<endl;
    
    }
    

    return 0;
}