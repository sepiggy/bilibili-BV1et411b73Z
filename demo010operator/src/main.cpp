#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  int a1 = 10;
  int b1 = 3;
  cout << a1 + b1 << endl
  cout << a1 - b1 << endl;
  cout << a1 * b1 << endl;
  cout << a1 / b1 << endl;
  //   cout << a1 / 0 << endl;
  auto result = 5.0 / 2.5;
  cout << result << endl;

  int a = 10, b = 20;

  cout << (a == b) << endl;
  cout << (a != b) << endl;
  cout << (a > b) << endl;
  cout << (a < b) << endl;
  cout << (a >= b) << endl;
  cout << (a <= b) << endl;

  // 在cpp中除了0都是真
  // 用0表示false; 1表示true

  cout << !a << endl;   // 0
  cout << !!a << endl;  // 1

  return 0;
}
