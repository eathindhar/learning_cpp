#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

// Create the classes here
class Shape{
    public:
        string shapeType;
        void printMytype(){
            cout<<shapeType<<endl;
        }

};

class Square : public Shape {
    public :
        int length;
        void calculateArea(){
            cout<<length*length<<endl;
        }
};

class Rectangle : public Shape {
    public :
        int length, breadth;
        void calculateArea(){
            cout<<length*breadth<<endl;
        }
}; 

int main() {

    //Write your code here
    Square s;
    s.length=5;
    s.shapeType = "square";
    s.printMytype();
    s.calculateArea();

    Rectangle r;
    r.length = 5;
    r.breadth = 4;
    r.shapeType = "rectangle";
    r.printMytype();
    r.calculateArea();
    return 0;
}