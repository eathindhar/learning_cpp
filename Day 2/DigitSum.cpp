#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n,d;
    int esum = 0, osum = 0;
    cin>>n;
    while(n!=0){
        d=n%10;
        if(d%2==0){
            esum +=d;
        }
        else{
            osum+=d;
        }
        n/=10;
    }
    cout<<esum<<" "<<osum;
    return 0;
}