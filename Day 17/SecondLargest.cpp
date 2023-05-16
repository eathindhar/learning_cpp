#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c,first,sec,last;
	cin>>a>>b>>c;
	if((a>b && a<c)||(a>c && a<b)){
	    cout<<a;
	}
	else if((b>c && b<a)||(b>a && b<c)){
	    cout<<b;
	}
	else {
	    cout<<c;
	}
	return 0;
}
