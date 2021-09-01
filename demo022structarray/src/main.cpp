#include <iostream>

using namespace std;

struct STU
{
    string name;
    int age;
    int score;
};

void printInfo(STU s)
{
    cout << s.name << "\t" << s.age << "\t" << s.score << endl;
}

int main(int argc, char **argv)
{
    STU stus[] = {{"zs", 18, 80},
                  {"ls", 19, 81},
                  {"ww", 20, 82}};

    int len = sizeof(stus) / sizeof(*stus);
    for (int i = 0; i < len; i++)
    {
        printInfo(stus[i]);
    }

    return 0;
}
