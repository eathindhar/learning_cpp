#include <iostream>
#include <string.h>
using namespace std;

int main(){
    //write code below
    string s;
    getline(cin, s);

    int max=0;
    char result;
    int count[26] = {0};
    for(int i =0;i<s.size();i++){
        count[s[i]-'a']++;
    }
    for(int i =0;i<26;i++){
        if(count[i]>max){
            max = count[i];
            result = ('a'+i);
        }
    }
    cout<<"Maximum repeated character is '"<<result<<"' at "<<max<<" times.";
    return 0;
}