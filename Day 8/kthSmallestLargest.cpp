#include <bits/stdc++.h> 
#include <iostream>
#include<algorithm>

using namespace std;

int removeDuplicate(int arr[], int n){
    if (n ==0 || n==1 ){
        return n;
    }

    int j=0;

    for(int i =0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            arr[j++]=arr[i];
        }
    }

    arr[j++] = arr[n-1];
    return j;
}

void kthSmallestLargest(int arr[], int n, int k) {
    //Write your code here
    sort(arr,arr+n);
    int newSize = removeDuplicate(arr , n);
    int kthsmall = -1, kthlarge=-1;
    if(k<=n){
        kthsmall = arr[k-1];
        kthlarge = arr[newSize-k];
    }
    cout<<kthlarge<<" "<<kthsmall<<endl;
}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        kthSmallestLargest(arr, n, k);
        t--;
    }

    return 0;
}