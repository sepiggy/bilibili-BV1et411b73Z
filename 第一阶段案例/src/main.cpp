#include <iostream>
#include <string>

#include "addressbook.h"

using namespace std;

bool addContactPerson(ContactPerson*);
bool showContactPerson();
bool deleteContactPerson();
bool findContactPerson();
bool updateContactPerson();
bool clearContactPerson();

int main(int argc, char** argv) {
  char input;
  ContactPerson contactPersons[1000];

  do {
    showMenu();
    cin >> input;
    switch (input) {
      case '1':
        addContactPerson(contactPersons);
        break;
      case '2':
        showContactPerson();
        break;
      case '3':
        deleteContactPerson();
        break;
      case '4':
        findContactPerson();
        break;
      case '5':
        updateContactPerson();
        break;
      case '6':
        clearContactPerson();
        break;
      default:
        break;
    }
  } while (input != '0');
  return 0;
}