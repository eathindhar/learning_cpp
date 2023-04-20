#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

    //Write your printDivisors function here
    void printDivisors(int n){
        int m = n/2;
        cout<<"1 ";
        for(int i = 2; i<=m;i++){
            if(n%i==0){
                cout<<i<<" ";
            }
        }
        cout<<n;
    }

int main() {
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}