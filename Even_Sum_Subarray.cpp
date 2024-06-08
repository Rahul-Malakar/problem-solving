#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>

using namespace std;

int lesss(const vector<int>& A) {
    unordered_map<int, int> preind;
    int maxLength = 0;
    int prefixSum = 0;

  
    preind[0] = -1;

    for (int i = 0; i < A.size(); ++i) {
        
        prefixSum += A[i];

        
        int parity = prefixSum % 2;

        if (preind.find(parity) != preind.end()) {
            int subarrayLength = i - preind[parity];
            maxLength = max(maxLength, subarrayLength);
        } else {
            
            preind[parity] = i;
        }
    }

    return maxLength;
}

int main() {
   int t; cin>>t;
   while(t--){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int ans = lesss(v);
    cout<<ans<<endl;
   }

    return 0;
}
