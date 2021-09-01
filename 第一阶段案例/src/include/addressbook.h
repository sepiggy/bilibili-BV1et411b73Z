#include <iostream>
#include <string>

using namespace std;

struct ContactPerson {
  string name;
  string gender;
  int age;
  string phoneNumber;
  string address;
};

void showMenu();

bool addContactPerson(ContactPerson *);

bool showContactPerson(ContactPerson *);

bool deleteContactPerson(ContactPerson *);

bool findContactPerson(ContactPerson *);

bool udpateContactPerson(ContactPerson *);

bool clearContactPerseon(ContactPerson *)