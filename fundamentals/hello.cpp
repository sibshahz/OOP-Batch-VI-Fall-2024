#include <iostream>
#include <string>

using namespace std;

int saySomething(){
	cout<<"Calculating my age...\n";
	return 32;
}

int main()
{
	int your_age=saySomething();
	string yourname;
	
	cout<<"Enter your name here: \n";
	getline(cin,yourname);
	cout << "Hello, "+yourname+"!!!";
	cout<<"Your age is: "<<your_age;
	return 0;
}