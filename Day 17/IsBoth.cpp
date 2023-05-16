#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,flag=0;
	cin>>n;
	if(n%5==0){
	    flag++;
	}
	if(n%11==0){
	    flag++;
	}
	
	if(flag==2){
	    cout<<"BOTH";
	}
	else if(flag ==1){
	    cout<<"ONE";
	}
	else{
	    cout<<"NONE";
	}
	return 0;
}
