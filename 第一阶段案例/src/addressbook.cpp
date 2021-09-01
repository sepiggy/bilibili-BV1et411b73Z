#include "addressbook.h"

using namespace std;

void showMenu() {
  cout << "*********欢迎使用通讯录******" << endl;
  cout << "*********1.添加联系人********" << endl;
  cout << "*********2.显示联系人********" << endl;
  cout << "*********3.删除联系人********" << endl;
  cout << "*********4.查找联系人********" << endl;
  cout << "*********5.修改联系人********" << endl;
  cout << "*********6.清空联系人********" << endl;
  cout << "*********0.退出通讯录********" << endl;
  cout << "*****************************" << endl;
  cout << "请输入选项: ";
}

bool addContactPerson(ContactPerson* cp) { ContactPerson temp; 
  cout << "请输入姓名:" << endl;
  cin >> temp.name;
  cout << "请输入性别(0-男,1-女):"
}