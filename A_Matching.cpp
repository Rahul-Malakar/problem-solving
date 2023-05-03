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
    while(t--)
    {
        string s; cin>>s;
        int count=0;
        int qcount=0, zcount=0;
        if(s[0]=='0'){
            cout<<0<<endl;
            continue;
        }
        for(auto it:s){
            if(it=='?'){
                qcount++;
            }
            if(it=='0'){
                zcount++;
            }
        }
        if(qcount==0){
            if(zcount==s.size()){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        else{
            int flag=0;
            for(auto it:s){
                if(flag==0 && it!='0'){
                    if(it!='?'){
                        flag=1;
                    }
                }
                if(flag==0 && it=='?'){
                    count+=9;
                    flag=1;
                }
                else if(flag==1 && it=='?'){
                    if(count==0){
                        count=1;
                    }
                    count*=10;
                }
            }
            cout<<count<<endl;
        }
        
    }

    return 0;
}