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

 string removeOuterParentheses(string s) {
        if(s == "" || s== "()"){
            return "";
        }
        string ans="";
        stack<int> st;
        st.push(s[0]);
        for(int i=1; i<s.size(); i++){
            if(s[i]==')' && ans[ans.size()-1]==')' && !st.empty()){
                st.pop();
            }
            else if(st.empty() && s[i]=='('){
                st.push(s[i]);
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }

int main(){

    string s = "()()";
    cout<<(removeOuterParentheses(s));
}