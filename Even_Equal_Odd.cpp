// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        int a; cin>>a;
        vector<int> ve,vo;
        for(int i=0; i<2*a; i++){
            int b; cin>>b;
            (b%2==1)?vo.emplace_back(b) : ve.emplace_back(b);
        }
        if(vo.size()==ve.size()){
            cout<<0<<endl;
        }
        else if(vo.size()>ve.size()){
            cout<<a-ve.size()<<endl;
        }
        else{
            vector<int> v2;
            for(int i=0; i<ve.size(); i++){
                if(ve[i]%4!=0){
                    v2.emplace_back(1);
                }
                else{
                    int count=0;
                    while(ve[i]%2!=1){
                        ve[i]=ve[i]/2;
                        count++;
                    }
                    v2.emplace_back(count);
                }
            }
            sort(v2.begin(), v2.end());
            int sub=(ve.size()-a);
            int ans=0;
            for(int i=0; i<sub; i++){
                ans+=v2[i];
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}