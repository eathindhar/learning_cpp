#include <iostream>
using namespace std;

string reverseStringWordWise(string input)
{
    // Write your code here
    string words[1000];
    string str="";
    int cnt=0;
    for(int i =0;i<=input.length();i++){
        if(input[i] == ' '|| input[i]=='\0' || input[i]==EOF){
            words[cnt++] = str;
            //cout<<"In For"<<str;
            str="";
        }
        else{
            str+=input[i];
            //cout<<"Else "<<str<<" ";
        }
    }
    cout<<"Count = "<<cnt;
    str="";
    for(int i = cnt-1;i>=0;i--){
        cout<<"In For "<<i<<words[i]<<endl;
        str+=words[i];
        if(i!=0){
            str+=" ";
        }
    }
    return str;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}