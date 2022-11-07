//Rahul Malakar 2112022

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    long long t; cin>>t;
    for(long long i=0;i<t;i++){
        char arr[8][8];
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin>>arr[i][j];
            }
        }
        int flag=0;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(arr[i][j]== '#' && arr[i-1][j-1]== '#' && arr[i-1][j+1]== '#' && arr[i+1][j-1]== '#' && arr[i+1][j+1] == '#'){
                    cout<<i+1<<' '<<j+1<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag){
                break;
            }
            
        }
    }
    
    return 0;
}