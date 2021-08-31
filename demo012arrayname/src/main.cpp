// 一维数组名称用途
// 1. 获取数组长度
// 2. 获取数组首地址
// 数组名是常量，不能作为左值
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  cout << "数组长度:" << sizeof(arr) / sizeof(*arr) << endl;
  cout << "数组首地址:" << (long)arr << endl;
  

  int arr2[][3] = {
      {1,2,3},
      {4,5,6}
  };
  
  cout << "二维数组大小:" << sizeof(arr2) << endl;
  cout << "二维数组长度(行数):" << sizeof(arr2) / sizeof(*arr2) << endl;
  cout << "二维数组列数:" << sizeof(arr2[0]) / sizeof(arr2[0][0]) << endl;
  return 0;
}