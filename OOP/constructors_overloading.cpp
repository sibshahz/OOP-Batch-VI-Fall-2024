#include <iostream>
#include <stdlib.h>

using namespace std;

class Student{
	int rollNo;
	string name;
	float GPA;
	
	public:
		Student();
		Student(int aRollNo);
		Student(string aName, int aRollNo);
		void getInfo(){
			cout<<"Your object info is: "<<rollNo<<","<<name<<",GPA IS: "<<GPA<<endl;
		}
};

Student::Student(){
	rollNo=0;
	name="";
	GPA=0.0;
}

Student::Student(int aRollNo){
	if(aRollNo<0){
		rollNo=0;
	}else{
		rollNo=aRollNo;
	}
}
Student::Student(string aName, int aRollNo){
	if(aRollNo<0){
		rollNo=0;
	}else{
		rollNo=aRollNo;
	}
	
	name = aName;
}

int main(){
	Student student1;// default constructor will be used
	student1.getInfo();
	Student student2(5692);
	student2.getInfo();
	Student student3("Special Name",7845);
	student3.getInfo();
	return 0;
}