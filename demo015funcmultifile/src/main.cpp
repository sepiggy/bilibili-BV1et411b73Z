/**
 * 函数的分文件编写
 * 函数的分文件编写一般有4个步骤:
 * 1. 创建后缀名为.h的头文件
 * 2. 创建后缀名为.cpp的源文件
 * 3. 在头文件中写函数的声明
 * 4. 在源文件中写函数的定义
 **/

#include <iostream>
#include "swap.h"

using namespace std;

int main(int argc, char **argv) {
  int a = 10, b = 20;
  cout << "a = " << a << ", b = " << b << endl;
  swap(&a, &b);
  cout << "a = " << a << ", b = " << b << endl;
}
