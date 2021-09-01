#include <iostream>

using namespace std;

struct STU
{
    string name;
    int age;
    int score;
};

void printInfo(STU *);

int main(int argc, char **argv)
{
    STU s = {"zs", 18, 100};
    printInfo(&s);

    return 0;
}

void printInfo(STU *p)
{
    cout << p->name << "\t" << p->age << "\t" << p->score << endl;
}