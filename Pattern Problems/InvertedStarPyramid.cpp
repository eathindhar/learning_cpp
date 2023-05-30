/*
***********
 *********
  *******
   *****
    ***
     *

n = 6
i = 0
    space  = 0
    star = 11 = 2*n - 1
i = 1
    space  = 1
    star = 9 = 2*n - 1 - 2
i = 2
    space  = 2
    star = 7 = 2*n - 1 - 4
*/
#include <iostream>
using namespace std;

int main()
{
    // write code below
    int n;
    // n = 5
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2*n - (2*i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}