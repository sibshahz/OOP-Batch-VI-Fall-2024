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
		Student(int aRollNo,string aName);
		void getInfo(){
			cout<<"Your object info is: "<<rollNo<<","<<name<<",GPA IS: "<<GPA<<endl;
		}
		~Student(){
			cout<<name<<" Destructor\n";
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
Student::Student(int aRollNo,string aName){
	if(aRollNo<0){
		rollNo=0;
	}else{
		rollNo=aRollNo;
	}
	
	name = aName;
	cout<<name<<" Constructor\n";
}

int main(){
Student studentB(123,"Ali");
Student studentA(564,"Ahmad");
return 0;
}