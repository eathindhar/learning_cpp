#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n,x,i,pos=-1;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            pos = i;
        }
    }
    cout<<pos;
    return 0;
}