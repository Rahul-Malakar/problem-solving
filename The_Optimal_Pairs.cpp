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
        int count = 0;
        for(int i=1; i<a; i++){
            if((__gcd(i, (a - i)))+(max((a - i),i))==a)
        {
            count++;
        }
        }
        
        
        cout << count << endl;
    }

    return 0;
}