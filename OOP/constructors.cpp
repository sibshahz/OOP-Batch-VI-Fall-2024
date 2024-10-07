#include <iostream>
#include <stdlib.h>

using namespace std;

class Student{
	private:
		string name;
		int rollNo;
	public:
		Student(string nm){
			cout<<"Constructor was called \n";
			name=nm;
			cout<<"Default value successfully assigned \n";
		}
		void setRollNo(int aRollNo);
		int getRollNo();
		inline int multiplyByTwo(int operand);
		string getName(){
			return name;
		}
};
void Student::setRollNo(int aRollNo){
	rollNo=aRollNo;
}
int Student::getRollNo(){
	return rollNo;
}

inline int Student::multiplyByTwo(int operand){
	return operand*2;
}


int main(){
	
	Student aStudent("Junaid");
	aStudent.setRollNo(256);
	cout<<"Your roll no is: "<<aStudent.getRollNo()<<"\n";
	cout<<"5 multiply by 2 is = "<<aStudent.multiplyByTwo(5)<<endl;
	cout<<"name of our object is: "<<aStudent.getName()<<"\n";
	return 0;
}