#include<iostream>
using namespace std;
void printArray(int arr[], int length){
    for (int i = 0; i < length; i++)
    {
        cout<<"index: "<<i<<" value: "<<arr[i]<<endl;
    }
    
}
int main() {
    int staticArray[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *dynamicArray = new int[8];
    dynamicArray[0] = 1;
    dynamicArray[1] = 2;
    // dynamicArray[2] = 3;// 数组第二位若不赋值会出现一个诡异的值
    dynamicArray[7] = 8;
    cout<<"print staticArray"<<endl;
    printArray(staticArray, 8);
    cout<<"print dynamicArray"<<endl;
    printArray(dynamicArray, 8);
    // delete []staticArray; // 出错，staticArray 非动态生成
    delete []dynamicArray;
}