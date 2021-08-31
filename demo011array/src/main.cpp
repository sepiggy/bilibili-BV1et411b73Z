#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  int arr[5];
  for (int i = 0; i < 5; i++) {
    arr[i] = 10 * i;
  }
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << endl;
  }

  int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  return 0;
}
