#include <iostream>

using namespace std;

int main(){
    int n,m;
    cout<<"size of array 1: ";
    cin>>m;
    cout<<"size of array 2: ";
    cin>>n;

    int arr1[m];
    int arr2[n];
    int result =0;

    cout<<"Enter array elements of array 1:";
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }

    cout<<"Enter array elements of array 2:";
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    //addition
    for(int i=0;i<m;i++){
        result += arr1[i];
    }

    for(int i=0;i<n;i++){
        result += arr2[i];
    }

    cout<<"Result is : "<<result<<endl;
    return 0;
}