#include<iostream>
#include<string>
#include<limits.h> // 引入边界值
using namespace std;
// 定义数据结构体
struct Statistics {
    int maxLength;
    int minLength;
    float averageLength;
    string maxLengthStr;
    string minLengthStr;
};
int getLength() {
    int length;
    cout<<"请输入需要存储的字符串个数:"<<endl;
    cin>>length;
    return length;
}
int getMax(int a, int b) {
    if (a > b)
    {
        return a;
    }
    return b;
}
int getMin(int a, int b) {
    if (a > b)
    {
        return b;
    }
    return a;
}
Statistics getStatistics(string str[], int length) {
    Statistics statistics;
    int max = INT_MIN; // 最小边界值
    int min = INT_MAX; // 最大边界值
    int reduce = 0;
    string maxLengthStr;
    string minLengthStr;
    for (int i = 0; i < length; i++)
    {
        string a = str[i];
        int sLength = a.length();
        reduce += sLength;
        max = getMax(sLength, max);
        min = getMin(sLength, min);
        maxLengthStr = max == sLength ? a : maxLengthStr;
        minLengthStr = min == sLength ? a : minLengthStr;
    }
    statistics.maxLength = max;
    statistics.maxLengthStr = maxLengthStr;
    statistics.minLength = min;
    statistics.minLengthStr = minLengthStr;
    statistics.averageLength = reduce / length;
    return statistics;
}
int main() {
    int length = getLength();
    string *str = new string[length];
    for (int i = 0; i < length; i++)
    {
        cout<<"请输入第"<<i + 1<<"个字符串：";
        cin>>str[i];

    }
    Statistics statistics = getStatistics(str, length);
    cout<<"maxLength: "<<statistics.maxLength<<endl;
    cout<<"maxLengthStr: "<<statistics.maxLengthStr<<endl;
    cout<<"minLength: "<<statistics.minLength<<endl;
    cout<<"minLengthStr: "<<statistics.minLengthStr<<endl;
    cout<<"averageLength: "<<statistics.averageLength<<endl;
    return 0;
}
