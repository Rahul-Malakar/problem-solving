#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a;
    cin >> a;
    int arr[a];
    for (ll i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    ll N = sizeof(arr) / sizeof(int);
    if (N < 3)
        cout<<"NO";
    sort(arr, arr + N);
    for (ll i = 2; i < N; i++)
        if (arr[i] < arr[i - 1] + arr[i - 2]) {cout << "YES"; return 0;}
    cout << "NO";

    return 0;
}