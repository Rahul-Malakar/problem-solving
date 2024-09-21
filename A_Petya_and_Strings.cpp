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
    string s1,s2;
    cin>>s1>>s2;

    for(int i=0; i<s1.size(); i++){
        s1[i] = tolower(s1[i]);
    }
    for(int i=0; i<s1.size(); i++){
        s2[i] = tolower(s2[i]);
    }

    if(s1<s2){
        cout<<-1;
    }
    else if(s1>s2){
        cout<<1;
    }
    else{
        cout<<0;
    }

    return 0;
}