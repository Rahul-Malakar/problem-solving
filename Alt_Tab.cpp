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

int main()
{
    
    ios_base::sync_with_stdio(false);

    int a; cin>>a;
    vector<string> vector1;
    for(int i=0; i<a; i++){
        string s; cin>>s;
        vector1.eb(s);
    }
    vector<string> vector2;
    std::unordered_set<std::string> uniqueStrings(vector2.begin(), vector2.end());

    for (int i = vector1.size() - 1; i >= 0; i--) {
        const std::string& currentString = vector1[i];
        if (uniqueStrings.find(currentString) == uniqueStrings.end()) {
            vector2.push_back(currentString);
            uniqueStrings.insert(currentString);
        }
    }
    string ans="";
    for(auto it:vector2){
        ans+=it[it.size()-2];
        ans+=it[it.size()-1];
    }
    cout<<ans<<endl;

    return 0;
}