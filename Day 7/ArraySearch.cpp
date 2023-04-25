#include <iostream>
using namespace std;

int search(int arr[],int n, int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i+1;
        }
    }
    return -1;
}
int main(){
    //write code below
    int n, x, i;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];

    cout<<"Enter Array Elements :";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter element to search :";
    cin>>x;

    int result = search(arr,n,x);

    if(result == -1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element is found at index "<<result;
    }
    return 0;
}