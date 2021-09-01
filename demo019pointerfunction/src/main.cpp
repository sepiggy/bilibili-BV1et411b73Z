#include <iostream>

using namespace std;

void swap(int *, int *);

int main(int argc, char **argv)
{
    int a = 100, b = 200;
    cout << "a=" << a << ",b=" << b << endl;
    swap(&a, &b);
    cout << "a=" << a << ",b=" << b << endl;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}