#include<iostream>
using namespace std;

int main()
{

    //1.shourt短整型
    short a = 10;

    //2.int整型
    int b = 10;

    //3.long长整型
    long c = 10;

    //4.long long 长长整型
    long long d = 10;

    cout << "short占用内存空间为：" << sizeof(a) << endl;
    cout << "int占用内存空间为：" << sizeof(b) << endl;
    cout << "long占用内存空间为：" << sizeof(c) << endl;
    cout << "long long占用内存空间为：" << sizeof(d) << endl;
    
    
    system("pause");
    return 0;
}