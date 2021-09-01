#include <iostream>

using namespace std;

struct STU
{
    string name;
    int age;
    int score;
};

void printStu(const STU *);

int main(int argc, char **argv)
{
    STU s = {"zs", 15, 60};
    printStu(&s);
    return 0;
}

void printStu(const STU *p)
{
    // p->age = 111;
    cout << p->name << "\t" << p->age << "\t" << p->score << endl;
}
