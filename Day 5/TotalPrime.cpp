#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

//Write your totalPrime function here
int totalPrime(int s, int e){
    int count=0;
  for (int i = s; i <= e; i++) {

    if (i == 1 || i == 0){
        continue;
    }
    int flag = 1;
    for(int j=2;j<=i/2;j++){
        if(i%j==0){
            flag=0;
            break;
        }

    }
    if(flag==1){
        count++;
    }
    }
    return count;
}

int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}