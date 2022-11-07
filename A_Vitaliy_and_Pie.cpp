#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    int arr[10000];
    int ans=0;
    for (int i = 1; i <=t - 1; i++)
    {
        char a, b;
        cin>>a>>b;
        arr[a]++;
        if(arr[b-'A'+'a']==0){
            ans++;
        }
        else{
            arr[b-'A'+'a']--;
        }
        
    }
    cout<<ans;
    

    return 0;
}