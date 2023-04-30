#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

/*
TestCases:
10
144.214.46.114	True
_8		        False
5.b		        False
6..11b		    False
a106		    False
253.112.234.23	True
251.133.199.220	True
e4		        False
77.97.123.147	True
23.210.94.137	True
*/

bool isValidIPv4(string ipAddress) {
    // Write your code here.
    int len = ipAddress.length();
    bool returnValue = false;
    int i=0, dotCount=0,wordCount=0,validCount=0;
    string words[4],temp="";
    int arr[4];
    for(i=0;i<len;i++){
        if(ipAddress[i]=='.'){
            words[wordCount++]=temp;
            dotCount++;
            temp="";
        }
        else if(isalpha(ipAddress[i])){
            return false;
        }
        else if(isdigit(ipAddress[i])){
            temp+=ipAddress[i];
        }
        else{
            return false;
        }
    }
    arr[0] = stoi(words[0]);
    if(arr[0]!=0){
        validCount++;
    }
    for(int i=1;i<wordCount;i++){
        arr[i]=stoi(words[i]);
        if(arr[i]>=0 && arr[i]<=255){
            validCount++;
        }
        else{
            return false;
        }
    }
    if(dotCount!=3){
        return false;
    }
    else if(validCount==3){
        returnValue = true;
    }
    return returnValue;
}

int main(){
    //write code below
    string str[] = {"144.214.46.114","_8","5.b","6..11b","a106","253.112.234.23","251.133.199.220","e4","77.97.123.147","23.210.94.137"};
    int size = sizeof(str)/sizeof(str[0]);
    for(int i=0;i<size;i++){
        bool ans = isValidIPv4(str[i]);
        if(ans){
            cout<<endl;
            cout<<str[i]<<" Answer True"<<endl;
            cout<<endl;
        }else{
            cout<<endl;
            cout<<str[i]<<" Answer False"<<endl;
            cout<<endl;
        }
    }
    return 0;
}