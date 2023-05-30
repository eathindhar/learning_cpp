#include <iostream>
using namespace std;
/*
gaga
abcde
rotor
xyzxy
abbaab
ababc
*/
string checkString(string s1, string s2, int len){
    int a[26] = {0};
    for(int i =0;i<len;i++){
        a[s1[i]-97]++;
        a[s2[i]-97]--;
    }

    for(int i =0;i<26;i++){
        if(a[i]!=0){
            return "NO";
        }
    }
    return "YES";
}
int main() {
	// your code goes here
	int t;
	cin>>t;
    cin.ignore();
	while(t--){
	    string str;
        getline(cin,str);
        int len = str.length();
        string s1,s2;
        if(len%2==0){
            s1 = str.substr(0,len/2);
            s2 = str.substr(len/2,len);
        }
        else{
            s1 = str.substr(0,len/2);
            s2 = str.substr(len/2 +1,len);
        }
        cout<<checkString(s1,s2, len/2)<<endl;
	}
	return 0;
}
