#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans = (a >= b ? (a >= c ? a : c) :
          (b >= c ? b : c));

        cout<<ans;
    return 0;
}
