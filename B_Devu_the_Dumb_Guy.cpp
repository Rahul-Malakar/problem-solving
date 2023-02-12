// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    int a,b; cin>>a>>b;
    vector<int> v;
    for(int i=0; i<a; i++){
        int b; cin>>b;
        v.emplace_back(b);
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(auto it:v){
        sum+=it*b;
        if(b>1){
            b--;
        }
    }
    cout<<sum<<endl;
    
    
    return 0;
}