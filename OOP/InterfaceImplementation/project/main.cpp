#include <iostream>
#include "student.h"

using namespace std;

int main(){
	Student someone;
	someone.setRollNo(255);
	cout<<"Roll no of someone is: "<<someone.getRollNo()<<endl;
	
	return 0;
}