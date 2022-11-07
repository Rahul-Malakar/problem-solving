//Rahul Malakar 2112022

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    int a; cin>>a;
    vector<int> v1,v2;
    for(int i=0; i<a; i++){
        int b; cin>>b; v1.emplace_back(b);
    }
    for(int i=0; i<a; i++){
        int c; cin>>c; v2.emplace_back(c);
    }
    // // //

    // vector<int> v3;
    // for(int i=0; i<a; i++){
    //     int key=v2[i];
    //     std::vector<int>::iterator itr = std::find(v1.begin(), v1.end(), key);
    //     int lol = std::distance(v1.begin(), itr);
    //     v3.emplace_back(lol);
    // }    

    // int count=0;
    // for(int i=0; i<a-1; i++){
    //     if(i<v3[i]+count){
    //         count++;
    //     }
    // }
    // cout<<count;
    int count=0;
    for(int i=0; i<a-1; i++){
        for(int j=0; j<a; j++){
            if(v2[i]==v1[j] && i<j+count){
                count++;
            }
        }
    }
    cout<<count;
    
    return 0;
}