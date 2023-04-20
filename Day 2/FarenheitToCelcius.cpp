#include <bits/stdc++.h> 
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //Write your code here
    int s, e, w;
    double c;
    cin>>s>>e>>w;
    for(int i = s; i<= e;i+=w){
        c = ((i-32.0) * (5.0/9.0));
        cout<<i<<"\t"<<int(c>0 ? floor(c) : ceil(c))<<endl;
    }
    return 0;
}