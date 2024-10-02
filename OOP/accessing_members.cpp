#include <iostream>
#include <stdlib.h>

using namespace std;

class Student{
	private:
		float cgpa=2.5;
	public:
		string name;
		string rollno;
		int age;

	
	void setCgpa(float input){ //setter || access method usually for private att
		if(input<=4){
			cgpa=input;
		}else{
			cout<<"You entered wrong cgpa"<<"\n";
		}
		
	}
	float getCgpa(){ // getter || usually to get private attributes
		return cgpa;
	}
	void setRollNo(string roll){
		rollno=roll;
	}
};



int main(){


	Student aStudent;
	aStudent.name="Khalid";
	aStudent.rollno="CS-33620";
	aStudent.age=36;
	aStudent.setRollNo("Struct off");
//	cout<<"Student cgpa is: "<<aStudent.cgpa<<"\n";
//	aStudent.cgpa=7;
	aStudent.setCgpa(4);
	cout<<"Student cgpa is: "<<aStudent.getCgpa()<<"\n";
//	aStudent.cgpa=90;
//		cout<<"Student cgpa is: "<<aStudent.cgpa<<"\n";
//	cout<<"Student details are: "<<"name ="<<aStudent.name<<"age= "<<aStudent.age<<" "<<aStudent.rollno<<"\n";
	
	
//	Student * zubair = new Student();
//	zubair->name="Zubair";
//	zubair->rollno="CS-33621";
//	zubair->age=22;
//	zubair->setRollNo("Admitted newly");
//	cout<<"Student details are: "<<"name ="<<zubair->name<<"age= "<<zubair->age<<<<zubair->rollno<<"\n";
		
	return 0;
}