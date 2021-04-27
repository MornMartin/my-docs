#include<iostream>
using namespace std;
int main() {
    float f = 1.2331;
    int i = static_cast<int>(f);
    // 可以有其他写法，如：
    int i2 = (int)(f);
    int i3 = int(f);
    int i4 = f;
    cout<<"i:"<<i<<endl;
    cout<<"i2:"<<i2<<endl;
    cout<<"i3:"<<i3<<endl;
    cout<<"i4:"<<i4<<endl;
    return 0;
}