#include <bits/stdc++.h> 
using namespace std;

int ans[1000000];
    int helper( int n ){
        if(n==0 || n==1 ){
            return n;
        }
        if (ans[n] != 0) {
          return ans[n] % 1000000007;
        } 
        else {
          ans[n] = helper(n - 1) + helper(n - 2);
          return ans[n] % 1000000007;
        }
    }
    
int fibonacciNumber(int n){
    
        return helper(n);
    
}