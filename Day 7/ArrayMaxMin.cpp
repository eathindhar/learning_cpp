#include <iostream>
using namespace std;

int main(){
    //write code below
    int n;
    cout<<"Size of array : ";
    cin>>n;

    int arr[n], i;
    cout<<"Enter array elements : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    int max = arr[0], min = arr[0];

    for(i =1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }

    cout<<"Maximum value : "<<max<<endl;
    cout<<"Minimum value : "<<min;
    return 0;
}