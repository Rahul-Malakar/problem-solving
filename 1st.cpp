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

#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.rbegin(), v.rend())

int main()
{
    
    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    for(int iter=1; iter<=t; iter++)
    {
        map<char,char> m;
        for(int i=0; i<26; i++){
            char a; cin>>a;
            m[i+'A']=a;
        }
        
        int b; cin>>b;
        int total=b;
        set<string> st;
        while(b--){
            string s; cin>>s;
            for(int i=0; i<s.size(); i++){
                s[i]=m[s[i]];
            }
            st.insert(s);
        }
        if(total!=st.size()){
            cout<<"Case #"<<iter<<": YES"<<endl;
        }
        else{
            cout<<"Case #"<<iter<<": NO"<<endl;
        }
    }

    return 0;
}