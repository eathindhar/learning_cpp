#include <iostream>
using namespace std;

int main(){
    //write code below
    int n;
    cout<<"Size of array";
    cin>>n;
    int arr[n], i;
    //array input
    cout<<"Enter array elements : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum, count = 0;
    cout<<"Enter sum amount : ";
    cin>>sum;

    for(i=0;i<n;i++){
        for(int j= i+1;j<n;j++){
            if(arr[i]+arr[j] == sum){
                cout<<"Pair is : "<<arr[i]<<","<<arr[j]<<endl;
                count++;
            }
        }
    }
    cout<<"Total Count : "<<count;
    return 0;
}