/*
n = 6
F
E F
D E F
C D E F
B C D E F
A B C D E F
*/

#include <iostream>
using namespace std;
int main(){
    //write code below
    int n = 3;
    //cin>>n;
    int convcons = 64;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j >= n-i; j--)
        {
            cout<<char(convcons+j)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}