//RAHUL MALAKAR 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    int a; cin>>a;
    int maxi=INT_MIN;
    int index=0;
    vector<int> v1,v2;
    for(int i=0; i<a; i++){
        int b; cin>>b;
        v1.emplace_back(b);
    }
    for(int i=0; i<a; i++){
        int c; cin>>c;
        v2.emplace_back(c);
    }
    for(int i=0; i<a; i++){
        if(v2[i]-v1[i]>maxi){
            maxi=v2[i]-v1[i];
            index=i+1;
        }
    }
    cout<<index<<endl;

    return 0;
}