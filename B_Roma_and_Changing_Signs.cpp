#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;
    vector<int> vpos, vneg;
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        int n;
        cin >> n;
        if (n < 0)
        {
            vneg.emplace_back(n);
        }
        else
        {
            vpos.emplace_back(n);
        }
    }

    if (vneg.size() == 0)
    {
        for (int i = 1; i < vpos.size(); i++)
        {
            sum += vpos[i];
        }
        if (b & 1)
        {
            sum -= vpos[0];
        }
        else
        {
            sum += vpos[0];
        }
        cout<<sum;
    }
    else
    {
        if (vneg.size() < b)
        {
            for (int i = 0; i < vneg.size(); i++)
            {
                vpos.emplace_back(-1 * vneg[i]);
            }
            b = b - vneg.size();
            sort(vpos.begin(), vpos.end());
            if (b & 1)
            {
                vpos[0]= -vpos[0];
            }
            for(auto it:vpos){
                sum+=it;
            }
            cout<<sum;
            
            
        }
        else
        {
            for(int i=0; i<vneg.size(); i++){
                if(b>0){
                    vpos.emplace_back(-1*vneg[i]);
                    b--;
                }

                else{
                    vpos.emplace_back(vneg[i]);
                }
            }
            for(auto it:vpos){
                sum+=it;
            }
            cout<<sum;
        }
    }

    return 0;
}