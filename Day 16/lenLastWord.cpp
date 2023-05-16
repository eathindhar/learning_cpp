#include <iostream>
using namespace std;

int lengthOfLastWord(string s) {
        string sdict[10000];
        int wordcount=0;
        string temp="";
        for(int i=s.length();i>0;i--){
            if(s[i]!=' ' || s[i]!=EOF){
                temp = temp+s[i];
            }
            else{
                sdict[wordcount]=temp;
                wordcount++;
                cout<<temp<<endl;
                temp="";
            }
        }
        return sdict[0].length();
    }

int main(){
    string s = "Hello world";
    cout<<lengthOfLastWord(s);
    return 0;
}