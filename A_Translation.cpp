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
    string a,b;
    cin>>a>>b;
    if(a.size()!=b.size()){
        cout<<"NO";
        return 0;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i]!=b[a.size()-i-1]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

    return 0;
}