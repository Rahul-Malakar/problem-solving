#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<climits>
#include<queue>
#include<stack>
// #include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#include<cstring>
#include<bitset>

#define ll          long long
#define fr(i,k,n)   for(ll i=k;i<n;i++)
#define rfr(i,n,k)  for(ll i=n;i>=k;i--)
#define inp(v,n)    fr(i,0,n){cin >> v[i];} 
#define all(x)      (x).begin(),(x).end()
#define vll         vector<ll>
#define vpll        vector<pair<ll,ll>> 
#define mll         map<ll,ll> 
#define mcll        map<char,ll>
#define p_b         push_back
#define br          '\n'
#define print(a,n)  for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl;
#define fbo(k)      find_by_order(k) // returns an iterator to kth element in ordered set (zero based index)
#define ook(k)      order_of_key(k) // counts the elements which are strictly less than key k in ordered set
#define max_pq      priority_queue<ll> 
#define min_pq      priority_queue<ll, vll, greater<ll>>

using namespace std;
using namespace __gnu_pbds;

// template<typename T>
// using ordered_set=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; //required to perform set operations with indexing facility

// /*************Number theory starts***************/
// const int M=1e9+7;
// //1. Binary exponentiation (log p)
// ll power(ll b, ll p){ll res=1; while(p!=0){ if(p&1){ res=res*b; p--;} else{ b=b*b; p=p/2;}} return res;}

// //2. Fermats little theorem (log m) provided m is prime and b and m are relatively prime
// ll modPow(ll b, ll p, ll m){ll res=1; while(p!=0){ if(p&1){ res=(res*b)%m; p--;} else{ b=(b*b)%m; p=p/2;}} return res;}

// ll mod(ll x){  return ((x%M + M)%M);}
// ll add(ll a, ll b){  return mod(mod(a)+mod(b));}
// ll mul(ll a, ll b){  return mod(mod(a)*mod(b));}
// ll inv(ll x){  return modPow(x,M-2,M);}
// ll divide(ll a, ll b){ return mul(a,inv(b));}
// // ll nCr(ll n, ll r){  return divide(fact[n],mul(fact[r],fact[n-r]));}
// ll phi(ll n){ ll res=n; for(ll i=2;i*i<=n;i++){ if(n%i==0){ res=res/i; res=res*(i-1);} while(n%i==0){ n=n/i;}} if(n>1){ res=res/n; res=res*(n-1); } return res;}
// /*************Number theory ends***************/

int query(int l, int mid, vector<int> &pre){
    cout << "? " << (mid-l+1) << " ";
    fr(i,l,mid + 1){
        cout << i << " ";
    }
    cout << endl;
    int x;
    cin >> x;
    if ((x % (pre[mid]-pre[l-1]) != 0)){
        return 0;
    }
    return 1;
}

void solve(){
    int n;
    cin >> n;
    vector<int> v(n+1,0);
    vector<int> pre(n+1,0);
    fr(i, 1, n + 1){
        cin >> v[i];
        if (i == 1){
            pre[i] = v[i];
        }else{
            pre[i] = v[i] + pre[i - 1];
        }
    }
    int l = 1, r = n;
    while (l < r){
        int mid = (l + r) / 2;
        int q = query(l, mid, pre);
        if (q == 0){
            r = mid;
        }else{
            l = mid + 1;
        }
    }
    cout << "! " << l << endl;
    return ;
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.txt","w+",stdout);
    #endif
    ll t=1;
    cin>>t;
    for(ll i=1;i<=t;i++){
        solve();
    }

    return 0;
}