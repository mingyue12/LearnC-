#include<iostream>
using namespace std;

//常量的定义方式
//1，#define 宏常量
//2,const 修饰的变量
#define day 7   //宏常量，通常用大写字母表示
    

int main()
{
    
    const int month = 12; //const修饰的变量，一旦赋值不可更改
    cout << "一周有" << day << "天" << endl;
    cout << "一年有" << month << "个月" << endl;
    system("pause");
    return 0;
}