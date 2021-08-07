#include <iostream>
using namespace std;

class Circle {
    protected:
        int radius;
    public:
        Circle(int r): radius(r){};
        virtual float area() {
            return  3.14 * this -> radius * this -> radius;
        };
        virtual float volumn() {
            return 0;
        };
        virtual string name() {
            return "圆";
        };
        void info() {
            cout<<name()<<endl;
            cout<<"\t面积："<<area()<<endl;
            cout<<"\t体积："<<volumn()<<endl;
        }
};

class Sphere: public Circle{
    public:
        Sphere(int r): Circle(r) {};
        float area() {
            return 4 * 3.14 * this -> radius;
        };
        float volumn() {
            return 4 / 3 * 3.14 * this -> radius;
        };
        string name() {
            return "球";
        };
};

class Column: public Circle{
    protected:
        int h;
    public:
        Column(int r, int h): Circle(r), h(h) {};
        float area() {
            return this -> Circle::area() * 2 + 2 * 3.14 * this -> radius * this -> h;
        };
        float volumn() {
            return this -> Circle::area() * this -> h;
        };
        string name() {
            return "圆柱";
        };
};

int main() {
    Circle c(2);
    Sphere s(3);
    Column co(4, 5);
    c.info();
    s.info();
    co.info();
    return 0;
};
