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
        string s;
        cin >> s;
        int sidha = 0, ulta = a - 1;
        int count = 0;
        while (sidha <= ulta)
        {
            if (s[sidha] == '(' && s[ulta] == ')')
            {
                sidha++;
                ulta--;
            }
            else if (s[sidha] == ')' && s[ulta] == ')')
            {
                sidha++;
                count++;
                
            }
            else if (s[sidha] == '(' && s[ulta] == '(')
            {
                
                count++;
                ulta--;
            }
            else
            {
                sidha++;
                count += 2;
                ulta--;
            }
        }
        cout << count << endl;
    }

    return 0;
}