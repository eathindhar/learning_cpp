#include <bits/stdc++.h> 
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
    
    int k;
    cin>>k;

    int arr2[n];
    int d=0;
    for(int i=k;i<n;i++){
        arr2[d]=arr[i];
        d++;
    }
    for(int i=0;i<k;i++){
        arr2[d]=arr[i];
        d++;
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}