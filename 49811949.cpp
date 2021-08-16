#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,g1,s1,b1,g2,s2,b2;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>g1>>s1>>b1>>g2>>s2>>b2;
	    if(g1+s1+b1>g2+s2+b2)cout<<1<<"\n";
	    else cout <<2<<"\n";
	}
	return 0;
}
