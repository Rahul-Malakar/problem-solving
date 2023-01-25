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


int main()
{
    
    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    while(t--)
    {
        int a; cin>>a;
        vll v;
        for(int i=0 ; i<a; i++){
            int b; cin>>b;
            v.eb(b);
        }
        int flag=0, x=0,y=0,z=0;
        for(int i=0; i<a; i++){
            for(int j=i+1; j<a; j++){
                for(int k=j+1; k<a; k++){
                    if((v[i]+v[j]+v[k])&1){
                        flag=1;
                        x=i+1; y=j+1; z=k+1;
                        break;
                    }
                }if(flag){break;}
            }if(flag){break;}
        }
        if(flag){
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}