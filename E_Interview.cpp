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

int query(int l, int mid, vector<int> &pre){
    cout<<"? "<<(mid-l+1)<<" ";
    for(int i=l; i<mid+1; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    int x; cin>>x;
    cout<<endl;
    if ((x % (pre[mid]-pre[l-1]) != 0)){
        return 0;
    }
    return 1;
}

void solve(){
    int n;
    cin>>n;
    vi v(n+1,0);
    vi psum(n+1,0);
    for(int i=1; i<n+1; i++){
        cin>>v[i];
        if(i==1){
            psum[i]=v[i];
        }
        else{
            psum[i]=v[i]+psum[i-1];
        }
    }
    int l=1, r=n;
    while(l<r){
        int mid=(l+r)/2;
        int q=query(l,mid,psum);
        if(q==0){
            r=mid;
        }
        else{
            l=mid+1;
        }
    }
    cout<<"! "<<l<<endl;
}



int main(){

    ll t;
    cin>>t;
    for(ll i=0; i<t; i++){
        solve();
        cout<<endl;
    }
    

    return 0;
}