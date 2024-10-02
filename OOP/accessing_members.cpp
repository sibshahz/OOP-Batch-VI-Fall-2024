#include <iostream>
#include <stdlib.h>

using namespace std;

class Student{
	public:
	string name;
	string rollno;
	int age;
};



int main(){
	Student aStudent;
	aStudent.name="Khalid";
	aStudent.rollno="CS-33620";
	aStudent.age=36;
	cout<<"Student details are: "<<"name ="<<aStudent.name<<"age= "<<aStudent.age<<"\n";
	
	Student * zubair = new Student();
	zubair->name="Zubair";
	zubair->rollno="CS-33621";
	zubair->age=22;
	cout<<"Student details are: "<<"name ="<<zubair->name<<"age= "<<zubair->age<<"\n";
		
	return 0;
}