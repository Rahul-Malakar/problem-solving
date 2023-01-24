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

    int a; cin>>a;
    vll v;
    for(int i=0; i<12; i++){
        int b; cin>>b;
        v.eb(b);
    }
    sort(v.begin(), v.end());
    int sum=0, count=0, flag=0;
    for(int i=v.size()-1; i>=0; i--){
        if(sum>=a){
            flag=1;
            break;
        }
        
        sum+=v[i];
        count++;
        
    }
    if(flag){
        cout<<count<<endl;
    }
    else{
        if(sum>=a){cout<<count<<endl;}
        else{cout<<-1<<endl;}
    }

    return 0;
}