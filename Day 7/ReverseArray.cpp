#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    /*int temp;
    for(int i =0;i<n/2;i++){
        temp=arr[n-1-i];
        arr[n-1-i] = arr[i];
        arr[i] = temp;
    }*/

    for(int i =n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}