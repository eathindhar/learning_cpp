#include <bits/stdc++.h> 
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

/*
sample input:
Welcome to Coding Ninjas

sample output:
emocleW ot gnidoC sajniN

*/

string reverseEachWord(string input)
{
    // Write your code here
    int l =0 , r =0 ;
    while(l < input.size()){
        while (r < input.size() && input[r] != ' '){
            r++;
        }
        reverse(input.begin() + l, input.begin() + r);
        l = r + 1;
        r = l;
   }
    return input;
    
}

int main()
{

    string str;
    getline(cin, str);
    string ans = reverseEachWord(str);
    cout << ans << endl;
    ;
}