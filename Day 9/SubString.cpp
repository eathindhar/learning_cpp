#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(string input) {
    //Write your code here
    int n = input.length();
    // for(int i = 0;i<n;i++){
    //     for(int len = 1; len<=n-i;len++){
    //         cout<<input.substr(i,len)<<endl;;
    //     }
    // }

    for(int i=0;i<n;i++){
        for(int j= i;j<n;j++){
            for(int k = i;k<=j;k++){
                cout<<input[k];
            }
            cout<<endl;
        }
    }
}

int main() {
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}