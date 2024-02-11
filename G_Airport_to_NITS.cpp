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
    
    int n,k,s;
    cin>>n>>k>>s;

    vector<int> v;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        v.eb(a);
    }
    sort(v.begin(),v.end());

    int i =0, j = s-1;
    int remain = n%s;
    int times = n/s;
    int maxi = 0;
    while(times--){
        maxi = max(maxi,v[j]-v[i]);
        i+=s;
        j+=s;
    }
    if(remain==0){
        cout<<maxi<<endl;
    }
    else if(remain==1){
        cout<<maxi<<endl;
    }
    else{
        maxi = max(maxi, v[v.size()-1]-v[i]);
        cout<<maxi<<endl;
    }
    

    return 0;
}