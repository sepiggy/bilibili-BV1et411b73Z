#include <iostream>

using namespace std;

int add(int num1, int num2) {
  int sum = num1 + num2;
  return sum;
}

int main(int argc, char** argv) {
  int a = 10;
  int b = 20;
  int sum = add(a, b);
  cout << "sum=" << sum << endl;
}
