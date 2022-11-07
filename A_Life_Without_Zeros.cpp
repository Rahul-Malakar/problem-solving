#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll func(ll N){
    ll ten = 1, ans = 0;
    while(N > 0){
        ll x = N % 10;
        if(x != 0){
            ans += x * ten;
            ten *= 10;
        }
        N /= 10;
    }
    return ans;
}
 
int main(void){
    ll A,B;
    
    cin >> A >> B;
    ll C = A + B;
    
    bool ans = (func(C) == func(A) + func(B));
    cout << (ans ? "YES" : "NO") << endl;
    
    return 0;
}