// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n,m,r,c,s,dr,dc;
    cin>>n>>m>>r>>c>>s;
    long long ans=0;
    for(int i=0;i<s;i++){
        scanf("%d%d",&dr,&dc);
        int cnt=INT_MAX;
        if(dr>0) cnt=min(cnt,(n-r)/(+dr));
        if(dr<0) cnt=min(cnt,(r-1)/(-dr));
        if(dc>0) cnt=min(cnt,(m-c)/(+dc));
        if(dc<0) cnt=min(cnt,(c-1)/(-dc));
        ans+=cnt;
        r+=dr*cnt;
        c+=dc*cnt;
    }
    cout<<ans;
}