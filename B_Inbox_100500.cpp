// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    int a; cin>>a;
    vector<int> v;
    int count=0;
    for(int i=0; i<a; i++){
        int b; cin>>b; if(b==1){
            v.emplace_back(i);
        }
    }

    if(v.size()==0){
        cout<<0;
        return 0;
    }

    for(int i=1; i<v.size(); i++){
        if(v[i]-v[i-1]==1){
            count++;
        }
        else if(v[i]-v[i-1]>=2){
            count+=2;
        }
    }
    cout<<count+1;



    return 0;
}