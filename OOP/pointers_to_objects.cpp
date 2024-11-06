#include <iostream>
#include <stdlib.h>

using namespace std;

class Student{
	private: 
		int rollNo;
		string name;
	public:
		Student();
		Student(string aName);
		void setRollNo(int aRollNo);
		int getRollNo();
};

Student::Student(){
	name = "Placeholder name";
}
Student::Student(string aName){
	name = aName;
}

void Student::setRollNo(int aRollNo){
	if(aRollNo>0){
		rollNo = aRollNo;
	}else{
		cout<<"Sahi value do bhai";
	}
}

int Student::getRollNo(){
	return rollNo;
}

int main(){
	Student obj;
	Student *ptr;
	ptr = &obj;
	ptr->setRollNo(987);
	cout<<"Roll no of ptr is: "<<ptr->getRollNo()<<endl;
	cout<<"Roll no of obj is: "<<obj.getRollNo()<<endl;
	system("PAUSE");
	return 0;
}