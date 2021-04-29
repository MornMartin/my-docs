#include<iostream>
//要使用string对象，须在程序中包含头文件 string
#include<string>
using namespace std;
void print(string key, string value){
    cout<<key<<" : "<<value<<endl;
}
void print(string key, int value){
    cout<<key<<" : "<<value<<endl;
}
void print(string key, bool value){
    cout<<key<<" : "<<value<<endl;
}
void print(string key, const char * value){
    cout<<key<<" : "<<value<<endl;
}
void print(string key, const char value){
    cout<<key<<" : "<<value<<endl;
}
int main() {
    string a = "123";
    print("a", a);// 打印的是字符串本身
    char b[] = "abc";
    for (int i = 0; i < 3; i++)
    {
        // 可按单个字符遍历
        cout<<i<<" : "<<b[i]<<endl;
    }
    string c = b; // 可以将字符数组赋值给字符串变量
    print("c", c);
    const char * d = c.c_str();// 返回一个指向字符串的指针，字符串内容与原string相同；
    print("d", d);
    int length = a.length();// 查询字符串长度
    int size = a.size();// 查询字符串大小
    print("size", size);
    bool isEmpty = a.empty();// 判断是否为空
    int find = a.find("b", 0); // 从某个地方开始查找指定字符串，并返回索引
    string insert = a.insert(0, "hello");// 会改变原字符串
    print("a", a);
    print("insert", insert);
    string append = a.append("world");// 将指定字符串插到原字符串结尾
    print("append", append);
    string f = "12345678";
    string subStr = f.substr(1, 6);//从开始到结束序号截取一段字符串,含起点和终点数据
    print("subStr", subStr); 
    return 0;
}
