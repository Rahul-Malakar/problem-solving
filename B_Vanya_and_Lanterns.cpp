//Rahul Malakar 2112022

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    long long a, b;
    cin>>a>>b;
    int arr[10000];
    arr[a]=b;
    for(int i=0; i<a; i++){
        cin>>arr[i];
    }
    sort(arr, arr+a);
    int arrmax=2*arr[0];
    for(int i=0; i<a; i++){
        if(arrmax<arr[i+1]-arr[i]){
            arrmax=arr[i+1]-arr[i];
        }
    }
    if(arrmax<2*(arr[a]-arr[a-1])){
        arrmax=2*(arr[a]-arr[a-1]);
    }
    printf("%.10f",arrmax/2.0);
    
    return 0;
}