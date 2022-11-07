#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int m;
	cin>>m;
	while(m--){
	    int n,a,b;
	    cin>>n>>b>>a;
	    int arr[n];int ca=0,cb=0;int cab=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]%a==0 && arr[i]%b==0)cab++;
	        else if(arr[i]%a==0)ca++;
	        else if(arr[i]%b==0)cb++;
	    }
	    
	  
	     if( cab>0)
	       cb=cb+1;
	       if(ca>=cb)cout<<"ALICE"<<endl;
	       else cout<<"BOB"<<endl;
	    
	    
	    
	}
	return 0;
}
