#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        float s,c;
	    cin>>s>>c;
	    float change = s + ((s*c) /100);
        cout<<change;
    }
    return 0;
}
