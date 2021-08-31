// 函数可以多次声明，必须唯一定义
#include <iostream>

using namespace std;

// 函数的声明
int max(int, int);

int main(int argc, char** argv) {
  int a = 10, b = 20;
  cout << max(a, b) << endl;
}

// 函数的定义
int max(int a, int b) { return a > b ? a : b; }