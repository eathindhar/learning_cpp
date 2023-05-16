#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	int arr[n];
	int val=-1;
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    if(arr[i]==k){
	        val = 1;
	    }
	}
	cout<<val;
	return 0;
}
