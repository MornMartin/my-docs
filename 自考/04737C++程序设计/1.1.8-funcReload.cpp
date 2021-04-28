#include<iostream>
using namespace std;
int max(int a, int b) {
    if (a < b)
    {
        return b;
    }
    return a;
}
int max(int a, int b, int c){
    int temp = max(a, b);
    return max(temp, c);
}
float max(float a, float e){
    if (a < e)
    {
        return e;
    }
    return a;
}
inline void print(string info, int value){
    cout<<"int "<<info<<" : "<<value<<endl;
}
inline void print(string info, float value){
    cout<<"float "<<info<<" : "<<value<<endl;
}
int main() {
    int x = max(1, 2);
    print("x", x);
    int y = max(1, 3, 4);
    print("y", y);
    float z = max(1.1, 1.4); // 1.4
    print("z", z);
    float z2 = max(1, 1.5); // 1 调用的是int型重载函数，第二个参数被向下取整了
    print("z2", z2);
    float z3 = max(1.1, 2); // 2
    print("z3", z3);
}