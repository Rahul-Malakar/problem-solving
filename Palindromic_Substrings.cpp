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
        string s; cin>>s;
        if(n==1){
            cout<<"Bob"<<endl;
            continue;
        }
        else if(n==2){
            if(s[0]==s[1]){
                cout<<"Alice"<<endl;
            }
            else{
                cout<<"Bob"<<endl;
            }
            continue;
        }
        int count1 =0, count0=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                count0++;
            }
            else{
                count1++;
            }
        }
        if((count1 + count0 )&1){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
    

    return 0;
}

