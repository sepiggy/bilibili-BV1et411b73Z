#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  bool b = true;
  cout << "b=" << b << endl;
  b = false;
  cout << "b=" << b << endl;
  cout << "sizeof(bool)=" << sizeof(bool) << endl;
  return 0;
}
