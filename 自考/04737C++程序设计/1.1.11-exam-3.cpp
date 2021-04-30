#include<iostream>
#include<cmath>
using namespace std;
int f(int a) {
    int b = 0, c = 1;
    b++;c++;
    return int(a + pow(double(b), 2) + c);
}
int main() {
    int i;
    for (int i = 0; i < 3; i++)
    {
        cout<<f(i)<<endl;// 3、4、5
    }
    
    return 0;
}
