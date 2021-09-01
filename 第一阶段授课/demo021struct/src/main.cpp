#include <iostream>

using namespace std;

struct Stu
{
    string name;
    int age;
    int score;
};

void printInfo(Stu);

int main(int argc, char **argv)
{
    // 第一种创建结构体变量方式
    // CPP中创建结构体变量struct关键字可以省略
    Stu s1;
    s1.name = "zs";
    s1.age = 19;
    s1.score = 100;
    printInfo(s1);

    // 第二种创建结构体变量方式
    struct Stu s2 = {"ls", 20, 99};
    printInfo(s2);

    return 0;
}

void printInfo(Stu s)
{
    cout << s.name << "\t" << s.age << "\t" << s.score << endl;
}
