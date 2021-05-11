#include<iostream>
#include<string>
using namespace std;

class Object{
};

int main(){
    Object obj1;
    Object obj2();
    // Object obj2("参数"); // 需要声明构造函数方可使用
    Object obj3 = Object();
    Object obj4, obj5;
    Object obj6(), obj7();

    Object *obj8 = new Object;
    Object *obj9 = new Object();
    
    Object &obj10 = obj1;
    Object *obj11 = &obj1;
    Object objs[3];

    delete obj8;
    delete obj9;
    return 0;
};
