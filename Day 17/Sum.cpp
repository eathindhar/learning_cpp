#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int n, sumeven=0, sumodd=0;
	cin>>n;
	for(int i =1;i<=n*2;i++){
	    if(i%2==0){
	        sumeven+=i;
	    }else{
	        sumodd+=i;
	    }
	}
	cout<<sumodd<<" "<<sumeven;
	return 0;
}
