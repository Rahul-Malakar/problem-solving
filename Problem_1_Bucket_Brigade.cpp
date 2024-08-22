#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

#define sp setprecision
#define eb emplace_back

#define vi vector<int>
#define vll vector<long long>
#define si set<int>
#define sll set<int>

#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.rbegin(), v.rend())

int main()
{

    freopen("buckets.in", "r", stdin);
	freopen("buckets.out", "w", stdout);
    
    ios_base::sync_with_stdio(false);
    ll x1,y1, x2,y2, x3,y3;
    for (ll i = 0; i < 10; i++)
    {
        for (ll j = 0; j < 10; j++)
        {
            char a; cin>>a;
            if(a=='B'){
                x1 = i;
                y1 = j;
            }
            else if(a=='L'){
                x2 = i;
                y2 = j;
            }
            else if(a=='R'){
                x3 = i;
                y3 = j;
            }
        }
        
    }

    int cows = abs(x1 - x2) + abs(y1 - y2) - 1;

	// if the barn, lake and rock are in the same column
	// and the rock is betwen the barn and the lake
	if (x1 == x2 && x3 == x1 &&
	    ((y2 < y3 && y3 < y1) ||
	     (y1 < y3 && y3 < y2))) {
		cows += 2;
	}
	// if the barn, lake and rock are in the same row
	// and the rock is between the barn and the lake
	else if (y1 == y2 && y3 == y1 &&
	         ((x2 < x3 && x3 < x1) ||
	          (x1 < x3 && x3 < x2))) {
		cows += 2;
	}
	cout << cows << endl;
    

    return 0;
}
