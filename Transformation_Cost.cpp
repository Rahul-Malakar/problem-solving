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
        int n; cin>>n;
        string s = "";
        while(n){
            if(n%2==0){
                s+='0';
            }
            else{
                s+='1';
            }
            n/=2;
        }
        int ans=0;
        vector<int> v;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){
                v.eb(i);
            }
        }
        int last1 =-1, last0 = -1;
        
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){
                last0 = i;
            }
        }
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                last1 = i;
                break;
            }
        }
        if(last0<last1){
            cout<<0<<endl;
            continue;
        }
        for(int i=0; i<v.size()-1; i++){
            ans+= (1<<v[i]);
        }
        ans+=1;
        cout<<ans<<endl;
    }
    

    return 0;
}