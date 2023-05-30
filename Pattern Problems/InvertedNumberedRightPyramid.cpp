/*
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

#include <iostream>
using namespace std;

int main()
{
    // write code below
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << n-j+1 << " ";
        }
        cout << endl;
    }
    return 0;
}