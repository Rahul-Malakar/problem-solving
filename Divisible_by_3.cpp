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
        long long a, b;
        cin >> a >> b;

        if (a % 3 == 0 || b % 3 == 0)
        {
            cout << 0 << endl;
        }
        else if((a-b)%3==0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }

    return 0;
}