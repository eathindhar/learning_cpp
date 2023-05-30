/*
1
01
101
0101
10101
010101
*/

#include <iostream>
using namespace std;
int main()
{
    // write code below
    int n = 6;
    int num = 1;
    // cin>>n;
    for (int i = 0; i < n; i++)
    {
        i%2==0 ? num = 1 : num = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num = 1 - num;
        }
        cout << endl;
    }
    return 0;
}