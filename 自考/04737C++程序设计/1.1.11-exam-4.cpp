#include<iostream>
using namespace std;
int max(int a, int b) {
    if (a > b)
    {
        return a;
    }
    return b;
}
double max(double a, double b) {
    if (a > b)
    {
        return a;
    }
    return b;
}
float max(float a, float b) {
    if (a > b)
    {
        return a;
    }
    return b;
}
// int max(int a, float b) {
//     if (a > b)
//     {
//         return a;
//     }
//     return b;
// }
int main() {
    int xI = 10, yI = 20;
    float xF = 30, yF = 40;
    double xD = 50, yD = 60;
    cout<<max(xI, yF)<<endl; // 缺少重载函数 int max(int, float)
    return 0;
}