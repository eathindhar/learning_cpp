/*
1          1
12        21
123      321
1234    4321
12345  54321
123456654321
*/

#include <iostream>
using namespace std;
int main(){
    //write code below
    int n = 6;
    std::cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<j;
        }
        for(int j = 1;j<=2*n - 2*i;j++){
            cout<<" ";
        }
        for(int j = i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}