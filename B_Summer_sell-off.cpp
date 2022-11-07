// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);

    long long sum_of_products = 0;
    vector<long long> maxv;
    long long t, a;
    cin >> t >> a;

    for (long long i = 0; i < t; i++)
    {
        long long products, people;
        cin >> products >> people;
        sum_of_products+=min(products,people);
        maxv.emplace_back(min(max(people-products,0*1LL),1LL*products));
    }
    sort(maxv.begin(), maxv.end());
    long long last = t - 1;
    while (a--)
    {
        sum_of_products += maxv[last];
        last--;
    }

    cout << sum_of_products;

    return 0;
}