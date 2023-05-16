#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c && a+c>b && b+c>a){
	    cout<<"YES";
	}
	else{
	    cout<<"NO";
	}
	return 0;
}
