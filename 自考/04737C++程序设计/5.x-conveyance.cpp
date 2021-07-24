#include <iostream>
using namespace std;

class Conveyance {
    private:
        string color;
    public:
        Conveyance(string c): color(c) {};
        string getColor() {
            return this -> color;
        };
};

class Vehicle: public Conveyance {
    private:
        int wheel;
        string gearbox;
    public: 
        Vehicle(int w, string g, string c): Conveyance(c) {
            this -> wheel = w;
            this -> gearbox = g;
        };
        int getWheel() {
            return this -> wheel;
        };
        string getGearbox() {
            return this -> gearbox;
        };
};

class Car: public Vehicle {
    private:
        int topSpeed;
    public:
        Car(int s, string g, string c): Vehicle(4, g, c) {
            this -> topSpeed = s;
        };
        int getTopSpeed() {
            return this -> topSpeed;
        };
};

class Mazda: public Car {
    public:
        Mazda(int s, string g, string c): Car(s, g, c){};
        friend ostream & operator<<(ostream & os, Mazda & m){
            os<<"颜色："<<m.getColor()<<endl;
            os<<"轮胎数："<<m.getWheel()<<endl;
            os<<"变速箱："<<m.getGearbox()<<endl;
            os<<"最高时速："<<m.getTopSpeed()<<endl;
        }
};

int main() {
    Mazda m(240, "auto", "red");
    cout<<m<<endl;
    return 0;
};
