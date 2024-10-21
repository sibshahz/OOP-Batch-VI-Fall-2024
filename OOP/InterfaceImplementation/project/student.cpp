#include "student.h"
#include <iostream>

using namespace std;


void Student::setRollNo(int rNum){
	if(rNum>0){
	rollNo=rNum;
		
	}else{
		cout<<"Please enter positive integer\n";
	}

}

int Student::getRollNo() const{
//	rollNo=755;
	return rollNo;
}