/*
 * * * * * *
 * * * * *
 * * * *
 * * *
 * *
 *
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
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}