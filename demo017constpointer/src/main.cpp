#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    // const修饰指针
    int a = 10;
    int b = 20;

    const int *p = &a; // 常量指针
    // *p = 20;
    p = &b;

    int *const p2 = &a; // 指针常量
    *p2 = 100;
    // p2 = &b;

    const int *const p3 = &a;
    // *p3 = 100;
    // p3 = &b;

    return 0;
}