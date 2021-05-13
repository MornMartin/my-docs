#include<iostream>
#include<math.h>
#include<string>
using namespace std;

class Point {
    double x,y;
    public:
        Point(){
            x = 0;
            y = 0;
        };
        Point(double a, double b){
            x = a;
            y = b;
        };
        void set(double a, double b){
            x = a;
            y = b;
        };
        double getX() {
            return x;
        };
        double getY() {
            return y;
        };
};
class Tri{
    Point p1, p2, p3;
    double s1, s2, s3;
    public:
        void setTri(Point a, Point b, Point c){
            p1 = a;
            p2 = b;
            p3 = c;
        };
        void test() {
            s1 = getLen(p1, p2);
            s2 = getLen(p2, p3);
            s3 = getLen(p3, p1);
            if (s1 == s2 && s2 == s3){
                cout<<"能构成等腰三角形"<<endl;
            }else{
                cout<<"不能构成等腰三角形"<<endl;
            };
        };
    private:
        double getLen(Point a, Point b){
        int disX, disY;
        disX = a.getX() - b.getX();
        disY = a.getY() - b.getY();
        return pow(disX * disX + disY * disY, 0.5);
    };
};

Point rcvPnt(string mark) {
    double x, y;
    Point p;
    cout<<"请输入第" + mark + "个点："<<endl;
    cin>>x>>y;
    p = Point(x, y);
    return p;
};

void iptPnts() {
    Point x, y, z;
    Tri t;
    x = rcvPnt("一");
    y = rcvPnt("二");
    z = rcvPnt("三");
    t.setTri(x, y, z);
    t.test();
    iptPnts();
};

int main() {
    iptPnts();
    return 0;
};
