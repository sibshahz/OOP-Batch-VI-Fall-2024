#include <iostream>
#include <stdlib.h>

using namespace std;

class Student {
private:
  int rollNo;
  string name;

public:
  Student();
  Student(string aName);
  void setRollNo(int aRollNo);
  int getRollNo();
  string getName();
};

Student::Student() { name = "Placeholder name"; }
Student::Student(string aName) { name = aName; }

void Student::setRollNo(int aRollNo) {
  if (aRollNo > 0) {
    rollNo = aRollNo;
  } else {
    cout << "Sahi value do bhai";
  }
}

int Student::getRollNo() { return rollNo; }
string Student::getName() { return name; }

int main() {
  //	Student obj;
  //	Student *ptr;
  //	ptr = &obj;
  //	ptr->setRollNo(987);
  //	cout<<"Roll no of ptr is: "<<ptr->getRollNo()<<endl;
  //	cout<<"Roll no of obj is: "<<obj.getRollNo()<<endl;

  // Student *ptr;
  // ptr = new Student("Junaid");
  // cout << "Default value for name is: " << ptr->getName() << endl;

  int startingRollNo = 23600;
  Student *ptr = new Student[100];
  for (int i = 0; i < 100; i++) {
    ptr[i].setRollNo(startingRollNo);
    startingRollNo = startingRollNo + 1;
  }

  cout << "Roll no at 1st student is: " << ptr[0].getRollNo() << endl;
  // system("PAUSE");
  return 0;
}