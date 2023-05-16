#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

string nextSmallerPalindrome(string &s) {
	// Write your code here.
	int pal = stoi(s);
    string str="";
    cout<<pal;
    return str;
}



int main(){
    //write code below
    int t;
    cin>>t;
    cin.ignore();
    string s;
    while(t--){
        getline(cin,s);
        cout<<nextSmallerPalindrome(s);
    }
    return 0;
}