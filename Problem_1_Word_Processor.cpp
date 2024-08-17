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

    // freopen("word.in", "r", stdin);
	// freopen("word.out", "w", stdout);
    
    ios_base::sync_with_stdio(false);
    int n, x; cin>>n>>x;
    string sentence = "";
    int count = x;
    for (int i = 0; i < n; i++)
    {
        string s; cin>>s;
        sentence += s + " ";
        count-=s.size();
        if(s.size()>count){
            count = x;
            cout<<endl;
        }
    }
    
    sentence.pop_back();
    cout<<sentence;
    

    return 0;
}
