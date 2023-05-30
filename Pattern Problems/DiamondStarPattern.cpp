/*
n = 6
     *
    ***
   *****
  *******
 *********
***********
***********
 *********
  *******
   *****
    ***
     *


*/

#include <iostream>
using namespace std;
void star_Pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void inverted_star_Pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    // write code below
    int n;
    cin >> n;
    star_Pyramid(n);
    inverted_star_Pyramid(n);
    return 0;
}