#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = arr;

    cout << *p << endl;
    cout << p[2] << endl;
    return 0;
}
