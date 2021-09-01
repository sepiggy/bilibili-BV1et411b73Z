#include <iostream>

using namespace std;

struct STUDENT
{
    string name;
    int age;
    int score;
};

struct TEACHER
{
    int id;
    string name;
    int age;
    STUDENT stu;
};

void printInfo(TEACHER *);

int main(int argc, char **argv)
{
    auto teacher = TEACHER{1, "wang", 50, {"zs", 18, 88}};
    printInfo(&teacher);
    return 0;
}

void printInfo(TEACHER *teacher)
{
    cout << teacher->id << "\t" << teacher->name << "\t" << teacher->age << endl;
    cout << teacher->stu.name << "\t" << teacher->stu.age << "\t" << teacher->stu.score << endl;
}