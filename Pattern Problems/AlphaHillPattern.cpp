/*
n = 6
     A     
    ABA    
   ABCBA   
  ABCDCBA  
 ABCDEDCBA 
ABCDEFEDCBA

      A
     ABA
    ABCBA
   ABCDCBA
  ABCDEDCBA
 ABCDEFEDCBA
*/

#include <iostream>
using namespace std;
int main(){
    //write code below
    int n=6;
    //cin>>n;
    int convcons = 65;
    for(int i=0;i<n;i++){
        for(int j = n-i-1;j>0;j--){
            cout<<" ";
        }
        for(int j =0;j<=i;j++){
            cout<<char(convcons+j);
        }
        for(int j =i-1;j>=0;j--){
            cout<<char(convcons+j);
        }
        cout<<endl;
    }
    return 0;
}