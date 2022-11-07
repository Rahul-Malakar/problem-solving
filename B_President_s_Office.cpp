#include<bits/stdc++.h>
using namespace std;
 
int arr[30];
int ar[110][110];
 
int main() {
    int N, M, pres;
    char c;
    cin>>N>>M>>c;
    pres = c-'A'+1;
    for (int i=1; i<=N; i++) {
        for (int k=1; k<=M; k++) {
            cin>>c;
            if (c == '.') ar[i][k] = 0;
            else ar[i][k] = c-'A'+1;
        }
    }
    for (int i=1; i<=N; i++) {
        for (int k=1; k<=M; k++) {
            if (ar[i][k] != 0 && ar[i][k] != pres && (ar[i-1][k] == pres || ar[i+1][k] == pres
                || ar[i][k-1] == pres || ar[i][k+1] == pres) ) arr[ ar[i][k] ] = 1;
        }
    }
    int resp = 0;
    for (int i=1; i<=26; i++) resp += arr[i];
    cout<<resp;
    return 0;
}