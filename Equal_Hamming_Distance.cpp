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

    int t; cin>>t;
    while(t--){
        int a; cin>>a;
        string s1,s2; cin>>s1>>s2;
        int c1=0, c2=0;
        for(int i=0; i<a; i++){
            if(s1[i]==s2[i]){
                c1++;
            }
            else{
                c2++;
            }
        }
        
    }

    return 0;
} 