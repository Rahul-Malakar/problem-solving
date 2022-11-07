//RAHUL MALAKAR 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    vector<string> strs{"r","ror","lol"};
    map<char, int> m;
        for(int i=0; i<strs.size(); i++){
            for(int j=0; j<strs[i].size(); j++){
                m[strs[i][j]]++;
            }
        }
    string temp="";
    for(auto const &pair:m){
        if(pair.second==strs.size()){
            temp.push_back(pair.first);
        }
    }

    string ans="";
    for(int i=0; i<strs[0].size(); i++){
        for(int j=0; j<temp.size(); j++){
            if(strs[0][i]==temp[j]){
                ans+=temp[j];
                
            }
        }
    }
    cout<<ans<<endl;
    

    

    return 0;
}