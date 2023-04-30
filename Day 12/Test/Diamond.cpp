#include <iostream>
using namespace std;
void printPattern(int n){
    for (int i = 0; i <= n / 2; i++)
    {
        for (int j = n / 2; j >= i + 1; j--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i * 2; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n / 2; i >= 0; i--)
    {
        for (int k = n / 2; k >= i; k--)
        {
            cout << " ";
        }
        for (int j = 0; j < i * 2 - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    } 
}
int main(){
    //write code below
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        printPattern(n);
    }
    return 0;
}