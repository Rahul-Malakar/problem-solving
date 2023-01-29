#include <bits/stdc++.h>
using namespace std;
vector<int> primeFactors(int n)
{
    vector<int> v;
    while (n % 2 == 0)
    {
        v.emplace_back(2);
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            v.emplace_back(i);
            n = n / i;
        }
    }

    
    if (n > 2)
        v.emplace_back(n);

    return v;
}

int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        vector<int> pf = primeFactors(x);

        vector<int> cv,npf;
        map<int,int> m;
        for(int i=0; i<pf.size(); i++){
            m[pf[i]]++;
        }
        for(auto it:m){
            npf.emplace_back(it.first);
            cv.emplace_back(it.second);
        }

        vector<pair<int,int>> vp;
        for(int i=0; i<cv.size(); i++){
            vp.push_back(make_pair(cv[i],npf[i]));
        }
        sort(vp.begin(), vp.end());

        
        for(int i=vp.size()-1; i>=1; i--){
            vp[i].first-=vp[i-1].first;
        }
        int now=0, sum=1;

        for(auto it:npf){
            if(it!=0){
                sum*=it;
            }
        }
        // cout<<sum<<endl;
        // sum*=vp[0].second;
        int lastsum=0;
        // for(auto it:vp){
        //     sum/=it.second;
        //     lastsum+=(sum*(it.first));
        // }

        for(int i=0; i<vp.size(); i++){
            int mul=1;
            for(int j=i; j<vp.size(); j++){
                mul*=vp[j].second;
            }
            lastsum+=vp[i].first*mul;
        }
        

        cout<<lastsum<<endl;

        
        // for(auto it:vp){
        //     cout<<it.first<<" "<<it.second<<" ";
        // } 
        // cout<<endl;

    }

    return 0;
}
