#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a = 10;
    int *p = &a;
    int **p1 = &p;
    cout << "a的地址为:" << &a << endl;
    cout << "指针p的值为:" << p << endl;
    cout << "指针p解引用为:" << *p << endl;
    cout << "指针p1解引用为:" << *p1 << endl;
    cout << "sizeof(p):" << sizeof(p) << endl;
    cout << "sizeof(p1):" << sizeof(p1) << endl;

    // 空指针
    int *np = NULL;
    cout << "*np:" << *np << endl;

    // 野指针
    int *wp = (int *)0x1100;
    cout << "*wp:" << *wp << endl;

    return 0;
}
