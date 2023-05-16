#include <iostream>
using namespace std;

int main(){
    //write code below
    int n,start = 0,end=0,value=1;
    cin>>n;
    for(int i =1;i<=n;i++){

        if(i%2!=0){
            start = i;
            end = i+4;
            int val = value;
            for(int j=start;j<=end;j++){
                cout<<val++<<" ";
                value++;
            }
        }
        else{
            int val = value+4;
            start = i+4;
            end = i;
            for(int j=start;j>=end;j--){
                cout<<val--<<" ";
                value++;
            }
        }
        cout<<endl;
    }
    return 0;
}