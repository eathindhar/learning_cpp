#include <bits/stdc++.h> 
#include<iostream>

#include<algorithm>

using namespace std;

class Fraction {

    // Complete the class
    public:
        int n; //numerator
        int d; //denominator

        Fraction(int a, int b){
            n = a;
            d = b;
        }

        void simplify(){
            int gcd = __gcd(n, d);
            n/=gcd;
            d/=gcd;
        }
        void add(Fraction const &f2){
            n = n*f2.d + f2.n*d;
            d *= f2.d;
            simplify();
        }
        void multiply(Fraction const &f2){
            n *= f2.n;
            d *= f2.d;
            simplify();
        }
        void print(){
            cout<<n<<"/"<<d<<endl;
        }
};

int main() {

    //Write your code here
    int a,b,x,y;
    int operationCount;
    int choice;
    cin>>a>>b;
    Fraction f1(a,b);
    cin>>operationCount;
    while(operationCount--){
        cin>>choice>>x>>y;
        Fraction f2(x,y);
        switch(choice){
            case 1:
                f1.add(f2);
                f1.print();
                break;
            
            case 2:
                f1.multiply(f2);
                f1.print();
                break;
        }
    }
    return 0;
}