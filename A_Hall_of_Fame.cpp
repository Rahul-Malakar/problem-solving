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


#define forl(i,n) for(int i=0; i<n; i++)
#define forle(i,n) for(int i=0; i<=n; i++)

#define sorti(v) sort(v.begin(), v.end())


int main()
{
    
    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    forl(i,t)
    {
        int n; cin>>n;
        string s; cin>>s;
        set<char> st;
        for(auto it:s){
            st.insert(it);
        }
        if(st.size()==1){
            cout<<-1<<endl;
            continue;
        }
        int flag1=0, flag2=0;
        for(int i=0; i<s.size()/2; i++){
            if(s[i]=='R'){
                flag1=1;
            }
            if(s[s.size()-i-1]=='L'){
                flag2=1;
            }
        }
        if(flag1 & flag2){
            cout<<0<<endl;
        }
        else{
            for(int i=0; i<s.size(); i++){
                if(s[i]=='R'){
                    cout<<i<<endl;
                    break;
                }
            }

        }
    }

    return 0;
}