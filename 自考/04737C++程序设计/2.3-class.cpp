#include<iostream>
#include<string>
using namespace std;
class Date {
    public: 
        int year;
        int month;
        int date;
};

class Persion {
    private:
        string name;
        Date birthDay;
    public:
        Persion();// 与class同名的成员函数为构造函数、不能指定返回值类型
        Persion(string name);
        string say();
        int getAge(int currentYear);
};
// 在类体外定义成员函数

Persion::Persion() {
 // do nothing
};
Persion::Persion(string n) {
    // 访问成员变量直接用变量名
    name = n;
};
int Persion::getAge(int currentYear) {
    // 访问其他对象的成员变量使用"."
    return currentYear - birthDay.year;
}
string Persion::say() {
    int age = getAge(2021);
    return "Hello, I'm " + name + ". I'm " + to_string(age);
};

int main() {
    return 0;
}