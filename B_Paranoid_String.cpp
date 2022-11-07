#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int a; cin>>a;
        string s; cin>>s;
        long long ans=a;
        for(int i=1; i<a; i++){
            if(s[i-1]!=s[i]){
                ans+=i;
            }
        }
        cout<<ans<<endl;
    }
}