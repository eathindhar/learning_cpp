#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

class Car {
    // Write your constructor and printCarInfo method here.
    public :
        int noOfGear;
        string color; 
};


class RaceCar: public Car {
    // Write your constructor and printRaceCarInfo method here.
    public :
        int noOfGear, maxSpeed;
        string color; 
        RaceCar(int nog, string colour, int ms){
            noOfGear = nog;
            color = colour;
            maxSpeed = ms;
        }
        void printInfo(){
            cout<<"noOfGear: "<<noOfGear<<endl;
            cout<<"color: "<<color<<endl;
            cout<<"maxSpeed: "<<maxSpeed<<endl;
        }

};


int main() {
    int noOfGear, maxSpeed;
    string color;
    cin >> noOfGear >> color >> maxSpeed;
    RaceCar raceCar(noOfGear, color, maxSpeed);
    raceCar.printInfo();
    return 0;
}