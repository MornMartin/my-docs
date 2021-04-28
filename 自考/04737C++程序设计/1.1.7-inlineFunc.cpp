#include<iostream>
#include<string>
using namespace std;
inline void print(string key, int value){
    cout<<key<<": "<<value<<endl;
}
int main() {
    int a = 1;
    int b = 2;
    print("a", a);
    print("b", b);
}