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
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        
        string s; cin>>s;
        int dig = -1, al = n;
        for(int i=0; i<n; i++){
            if(s[i]>='0' && s[i]<='9'){
                dig = max(dig, i);
            }
            if(s[i]>='a' && s[i]<='z' && al == -1){
                al = i;
            }
        }
        if(al<dig){
            cout<<"NO"<<endl;
            continue;
        }
        
        int flag1 =0;
        for(int i=0; i<dig; i++){
            if(s[i]>s[i+1]){
                flag1 = 1;
                break;
            }
        }
        if(flag1){
            cout<<"NO"<<endl;
            continue;
        }
        
        for(int i=dig+1; i<n-1; i++){
            
            if(s[i]>s[i+1]){
                flag1 = 1;
                break;
            }
        }
        if(flag1){
            cout<<"NO"<<endl;
            continue;
        }
        
        else{
            cout<<"YES"<<endl;
        }
        

    }

    return 0;
}

