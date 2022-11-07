#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    long long t; cin>>t;
    for(long long i=0;i<t;i++){
        
        int a,b; cin>>a>>b;
        for(int i1=a; i1<=b; i1++){
            for(int i2=i1+1; i2<=b; i2++){
                for(int i3=i1+2; i3<=b; i3++){
                    for(int i4=i1+3; i4<=b; i4++){
                        if((i1^i2^i3^i4)==0){
                            
                            cout<<i1<<" "<<i2<<" "<<i3<<" "<<i4<<endl;
                            return 0;
                        }
                    }
                }
            }
        }
        cout<<-1<<endl;
    }
    
    return 0;
}