#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c && a+c>b && b+c>a){
	    if(a==b && b==c){
	        cout<<1;
	    }
	    if((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a)){
	        cout<<2;
	    }
	    if(a!=b && b!=c && c!=a){
	        cout<<3;
	    }
	}
	else{
	    cout<<-1;
	}
	return 0;
}
