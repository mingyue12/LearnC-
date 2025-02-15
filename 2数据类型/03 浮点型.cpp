#include<iostream>
using namespace std;

int main()
{

    //1.单精度浮点型
    //2.双精度浮点型
    //默认情况下，输出一个小数，会显示6位有效数字
    float f = 3.14f;
    double d = 3.14;
    cout << "f = " << f << endl;
    cout << "d = " << d << endl;
    
    cout << "size of float = " << sizeof(float) << endl;
    cout << "size of double = " << sizeof(double) << endl;

    system("pause");
    return 0;
}