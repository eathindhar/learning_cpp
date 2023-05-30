/*
n = 6
A B C D E F
A B C D E 
A B C D
A B C
A B
A
*/

#include <iostream>
using namespace std;
int main(){
    //write code below
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        for(int j =n;j>i;j--){
            cout<<char(n-j+65)<<" ";
        }
        cout<<endl;
    }
    return 0;
}