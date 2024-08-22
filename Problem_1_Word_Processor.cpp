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

    freopen("word.in", "r", stdin);
	freopen("word.out", "w", stdout);
    
    ios_base::sync_with_stdio(false);
    int n, x; cin>>n>>x;
    int count = x;
    string sentence = "";
    vector<string> lines;
    
    while(n--){
        string s; cin>>s;
        if(s.size()>count){
            sentence.pop_back();
            lines.push_back(sentence);
            sentence = "";
            count = x;
        }
        sentence+= s + " ";
        count-=s.size();

    }
    sentence.pop_back();
    lines.push_back(sentence);

    for(auto it:lines){
        cout<<it<<endl;
    }

    return 0;
}
