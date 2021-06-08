#include <iostream>
using namespace std;
class Point{
    private:
        int x;
        int y;
    public:
        Point(int x = 0, int y = 0) {
            this -> x = x;
            this -> y = y;
        };
        Point(Point &p) {
            this -> x = p.x + 1;
            this -> y = p.y + 1;
        };
        void printValue() {
            cout<<"x: "<<x<<"; y: "<<y<<endl;
        };
        void printPointer() {
            cout<<"pointer:"<<this<<endl;
        };
};

int main() {
    Point p(1, 1);
    Point p2 = p;
    cout<<"p: "<<endl;
    p.printPointer();
    p.printValue();
    cout<<"2: "<<endl;
    p2.printPointer();
    p2.printValue();
}