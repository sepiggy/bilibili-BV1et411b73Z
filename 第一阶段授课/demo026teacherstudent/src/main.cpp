#include <iostream>
#include <string>

using namespace std;

struct Student {
  string sName;
  int score;
};

struct Teacher {
  string tName;
  Student sArray[5];
};

void allocSpace(Teacher *tArray, int len);

void printInfo(const Teacher *pTeacher, int len);

int main() {
  Teacher tArray[3];
  int len = sizeof(tArray) / sizeof(*tArray);
  allocSpace(tArray, len);
  printInfo(tArray, len);
  return 0;
}

// 给老师和学生赋值的函数
void allocSpace(Teacher *tArray, int len) {
  std::string nameSeed = "ABCDE";
  for (int i = 0; i < len; i++) {
    tArray[i].tName = "teacher_";
    tArray[i].tName += nameSeed[i];
    for (int j = 0; j < 5; j++) {
      tArray[i].sArray[j].sName = "student_";
      tArray[i].sArray[j].sName += nameSeed[j];
      tArray[i].sArray[j].score = 60;
    }
  }
}

void printInfo(const Teacher *pTeacher, int len) {
  for (int i = 0; i < len; i++) {
    cout << pTeacher[i].tName << endl;
    for (int j = 0; j < 5; j++) {
      cout << pTeacher[i].sArray[j].sName << "\t" << pTeacher[i].sArray[j].score
           << endl;
    }
  }
}