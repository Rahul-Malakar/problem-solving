// RAHUL MALAKAR 2112022

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

    long long m, n;
    cin >> m;
    cin >> n;
    string s;
    cin >> s;
    
    vector<pair<long long,long long>> v;
    for(long long i=0; i<m; i++){
        long long x,y; cin>>x>>y;
        v.eb(make_pair(x,y));
    }

    long long curx=v[0].first, cury=v[0].second;
    // long long i=0, j=1;
    string ans="";
    // while(i<m && j<n){
    //     long long kx=v[j].first-curx, ky=v[j].second-cury;
    //     if(kx>0 && ky>0){
    //         if(s[i]=='A'){
    //             curx=v[j].first; cury=v[j].second;
    //             i++;
    //             j++;
                
    //         }
    //         else{
    //             j++;
    //         }
    //     }
    //     else if(kx>0 && ky<0){
    //         if(s[i]=='B'){
    //             curx=v[j].first; cury=v[j].second;
    //             i++;
    //             j++;
    //         }
    //         else{
    //             j++;
    //         }
    //     }
    //     else if(kx<0 && ky>0){
    //         if(s[i]=='C'){
    //             curx=v[j].first; cury=v[j].second;
    //             i++;
    //             j++;
    //         }
    //         else{
    //             j++;
    //         }
    //     }
    //     else if(kx<0 && ky<0){
    //         if(s[i]=='D'){
    //             curx=v[j].first; cury=v[j].second;
    //             i++;
    //             j++;
    //         }
    //         else{
    //             j++;
    //         }
    //     }
        
        

    // }
    for(auto it:v){
        long long kx=it.first-curx, ky=it.second-cury;
        if(kx>0 && ky>0){
            ans.push_back('A');
        }
        else if(kx>0 && ky<0){
            ans.push_back('B');
        }
        else if(kx<0 && ky>0){
            ans.push_back('C');
        }
        else if(kx<0 && ky<0){
            ans.push_back('D');
        }
        curx=it.first; cury=it.second;

    }
    long long i=0, j=0;
    while(i<m && j<n){
        if(s[i]==ans[j]){
            i++;j++;
        }
        else{
            i++;
        }
    }

    cout<<v[j].first<<" "<<v[j].second<<endl;

    

    return 0;
}