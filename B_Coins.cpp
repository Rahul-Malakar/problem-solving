#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);

    vector<int> v(6,0);
    for(int i=0; i<3; i++){
        string s; cin>>s;
        if(s=="A>B" || s=="B<A"){
            v[0]++;
        }
        else if(s=="A<B" || s=="B>A"){
            v[1]++;
        }
        else if(s=="B>C" || s=="C<B"){
            v[2]++;
        }
        else if(s=="C>B" || s=="B<C"){
            v[3]++;
        }
        else if(s=="A<C" || s=="C>A"){
            v[4]++;
        }
        else if(s=="C<A" || s=="A>C"){
            v[5]++;
        }
    }

    if(v[0]==1 && v[2]==1 && v[4]==1){
        cout<<"ACB"<<endl;
    }
    else if(v[0]==1 && v[2]==1 && v[5]==1){
        cout<<"CBA"<<endl;
    }
    else if(v[0]==1 && v[3]==1 && v[4]==1){
        cout<<"BAC"<<endl;
    }
    else if(v[0]==1 && v[3]==1 && v[5]==1){
        cout<<"BCA"<<endl;
    }
    else if(v[1]==1 && v[2]==1 && v[4]==1){
        cout<<"ACB"<<endl;
    }
    else if(v[1]==1 && v[2]==1 && v[5]==1){
        cout<<"CAB"<<endl;
    }
    else if(v[1]==1 && v[3]==1 && v[4]==1){
        cout<<"ABC"<<endl;
    }
    else if(v[1]==1 && v[3]==1 && v[5]==1){
        cout<<"ABC"<<endl;
    }
    else{cout<<"IMPOSSIBLE"<<endl;}


    return 0;
}