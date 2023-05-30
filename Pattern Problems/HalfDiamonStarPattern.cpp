/*
n = 6
     *
     **
     ***
     ****
     *****
     ******
     *****
     ****
     ***
     **
     *

     *
     **
     ***
     ****
     *****
     ******
     *****
     ****
     ***
     **
     *
*/

#include <iostream>
using namespace std;

void inverted_right_triangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void right_triangle(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    inverted_right_triangle(n - 1);
}

int main()
{
    // write code below
    int n;
    cin >> n;
    // method 1
    //right_triangle(n);
    

    // alternate approach
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if(i>n){
            stars = 2*n-i;
            // i = 7 -> stars = 2*6 - 7 = 12 -7 = 5 
        }
        for(int j = 1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}