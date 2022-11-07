// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);

    long long t;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {
        int a;
        cin >> a;
        vector<int> v1, v2;
        int flag = 1;
        for (int i = 0; i < a; i++)
        {
            int val1;
            cin >> val1;
            v1.emplace_back(val1);
        }
        for (int i = 0; i < a; i++)
        {
            int val2;
            cin >> val2;
            v2.emplace_back(val2);
        }
        int sub = *max_element(v1.begin(), v1.end()) - *max_element(v2.begin(), v2.end());
        if(sub<0){cout<<"NO"<<endl; continue;}
         for (int i = 0; i < a; i++)
            {

                if (v2[i] == 0)
                {
                    if (v1[i] > sub)
                    {
                        flag=0;
                        break;
                    }
                }
                else if (v1[i] - v2[i] != sub)
                {
                    flag=0;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << "YES" << endl;
            }
            else{
                cout<<"NO"<<endl;
            }
    }

    return 0;
}