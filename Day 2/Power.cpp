#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int x, n, r=1;
    cin>>x>>n;
    if(n==0){
        cout<<1;
    }
    else{
        while(n!=0){
            r=r*x;
            n--;
        }
        cout<<r<<"r value";
    }
    return 0;
}