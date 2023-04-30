#include <iostream>
using namespace std;

void print(int n){
    if(n==1){
        cout<<1;
    }
    else {
        for(int i = 0;i<n;i++){
            for(int j=0;j<i;j++){
                if(j==0 || j==i-1){
                    cout<<1;
                }
                else if(j<i){
                    cout<<2;
                }
            }
            cout<<endl;
        }
    }  
}
int main(){
    //write code below
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        print(n);
    }
    return 0;
}