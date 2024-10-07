#include <iostream>
#include <stdlib.h>

using namespace std;

class Student{
	private:
		int rollNo;
	public:
		void setRollNo(int aRollNo);
		int getRollNo();
		inline int multiplyByTwo(int operand);
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
	
	Student Junaid;
	Junaid.setRollNo(256);
	cout<<"Your roll no is: "<<Junaid.getRollNo()<<"\n";
	cout<<"5 multiply by 2 is = "<<Junaid.multiplyByTwo(5);
	return 0;
}