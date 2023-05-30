/*
n = 6
A 
B B
C C C
D D D D
E E E E E
F F F F F F
*/

#include <iostream>
using namespace std;
int main(){
    //write code below
    int n;
    cin>>n;
    int convcons = 65;
    for(int i=0;i<n;i++){
        for(int j =0;j<=i;j++){
            cout<<char(convcons)<<" ";
        }
        cout<<endl;
        convcons++;
    }
    return 0;
}