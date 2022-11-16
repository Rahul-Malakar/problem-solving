#include<bits/stdc++.h>
using namespace std;

int main(){


    cout<<"Enter input for J: "<<endl;
    int J; cin>>J;
    cout<<"Enter input for K: "<<endl;
    int K; cin>>K;
    cout<<"Enter input for Qn: "<<endl;
    int Qn; cin>>Qn;
    if(J==0 && K==0){
        cout<<Qn<<endl;
    }
    else if(J==1 && K==0){
        cout<<1<<endl;
    }
    else if(J==0 && K==1){
        cout<<0<<endl;
    }
    
    else{
        cout<<1-Qn<<endl;
    }

    return 0;
}