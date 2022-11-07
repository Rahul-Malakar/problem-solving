//Rahul Malakar 2112022

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    string s; cin>>s;
    string s2=s;
    reverse(s2.begin(),s2.end());
    cout<<s+s2;
    
    return 0;
}