#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    string b = "bear";
    int n = s.size();
    int pairs = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i, k = 0; j < n; j++)
        {
            if (k < 4)
            {
                if (s[j] == b[k])
                    k++;
                else if (s[j] == b[0])
                    k = 1;
                else
                    k = 0;
            }
            if (k == 4)
                pairs++;
        }
    }
    cout << pairs << endl;
}