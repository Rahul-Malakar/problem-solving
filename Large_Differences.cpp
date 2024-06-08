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
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        vector<int> diffs;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        if(n==1){
            cout<<max(k,v[0]);
            continue;
        }
        if(n==2){
            int two = 0;
            two = max(two, abs(1-v[1]));
            two = max(two, abs(1-v[0]));
            two = max(two, abs(k-v[1]));
            two = max(two, abs(k-v[0]));
            cout<<two<<endl;
            continue;
        }
        for(int i=1; i<n-1; i++){
            int cur = abs(v[i] - v[i-1]) + abs(v[i]-v[i+1]);
            diffs.push_back(cur);
        }
        int ind = 0;
        int mini = INT_MAX;
        for(int i=0; i<diffs.size(); i++){
            if(diffs[i]<mini){
                ind  = i;
                mini = diffs[i];
            }

        }
        
        int now = diffs[ind];
        ind++;
        int left = abs(1-v[ind-1]) + abs(1-v[ind+1]);
        int right = abs(k-v[ind-1]) + abs(k-v[ind+1]);
        if(left>right){
            v[ind] = 1;
        }
        else{
            v[ind] = k;
        }
        int sum = 0;
        for(int i=0; i<n-1; i++){
            sum+= abs(v[i]-v[i+1]);
        }
        cout<<sum<<endl;

    }

    return 0;
}

