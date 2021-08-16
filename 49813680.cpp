#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,arr[4];
	cin>>T;
	int a,b,c,d;
	for(int i=0;i<T;i++){
	    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
	    sort(arr,arr+4);
        a=arr[0];b=arr[1];c=arr[2];d=arr[3];
        if(a==b && b==c && c!=d){
            cout<<1<<"\n";
            continue;
        }
        if(b==c && c==d && a!=d){
            cout<<1<<"\n";
            continue;
        }
        if(a==b && b==c && c==d){
            cout<<0<<"\n";
            continue;
        }
        else cout<<2<<"\n";	    
        
	}
	return 0;
}
/*if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout<<2<<"\n";
            continue;
            
        }
        if(a==b &&b==c &&c==d){
            cout<<0<<"\n";
            continue;
        }
        if()
        else cout<<1<<"\n";
        */