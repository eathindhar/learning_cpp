/*
n = 6

************
*****  *****
****    ****
***      ***
**        **
*          *
*          *
**        **
***      ***
****    ****
*****  *****
************
*/

#include <iostream>
using namespace std;
int upperPattern(int n){
    int spaces  = 0;
    for (int i = 0; i < n; i++)
    {
        //upper triangle
        for(int j = i;j<n;j++){
            cout<<"* ";
        }
        for(int j = spaces;j>0;j--){
            cout<<" ";
        }
        for(int j = i; j<n;j++){
            cout<<"* ";
        }
        spaces += 4;
        cout<<endl;
    }
    return spaces;
}
void lowerPattern(int n, int spaces){
    for (int i = 0; i < n; i++)
    {
        for(int j = 0;j<=i;j++){
            cout<<"* ";
        }
        for(int j = spaces;j>0;j--){
            cout<<" ";
        }
        for(int j = 0; j<=i;j++){
            cout<<"* ";
        }
        spaces -= 4;
        cout<<endl;
    }
}
int main()
{
    // write code below
    int n;
    cin>>n;
    int spaces = upperPattern(n) - 4;
    lowerPattern(n, spaces);
    return 0;
}