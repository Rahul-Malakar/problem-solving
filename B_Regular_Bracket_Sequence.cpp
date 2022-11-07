// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    string s; cin>>s;
    int j=s.size();
    int sumo = 0, count=0;
    while(j--){
        if(s[j]==')'){
            sumo++;
        }
        else if(sumo){
            sumo--;
            count+=2;
        }
    }
    cout<<count;

    return 0;
}