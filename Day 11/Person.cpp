#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class Person {

    // Complete the class
    private :
        string name;
        int age;

    public:
        void setValue(){
            cin>>name;
            cin>>age;
        }
        void getValue(){
            cout<<"The name of the person is "<<name<<" and the age is "<<age<<".";
        }

};

int main() {

    //Write your code here
    Person p;
    p.setValue();
    p.getValue();
    return 0;
}