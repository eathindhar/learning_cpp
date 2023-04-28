#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

/*
Sample Input:
aabccbaa

Sample Output:
abcba

*/

/* other way of doing it is using erase() function in cstring*/

string removeConsecutiveDuplicates(string input)
{
    // Write your code here
    string str="";
    int cntstr=0;
    int cntinput=0;
    for(int i =0;i<input.length();i++){
        if(input[i]!=input[i+1]){
            str+=input[i];
        }
    }
    return str;
}

int main()
{
    string str;
    cin >> str;
    string ans = removeConsecutiveDuplicates(str);
    cout << ans << endl;
}