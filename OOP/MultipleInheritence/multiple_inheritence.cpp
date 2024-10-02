#include <iostream>
#include <stdlib.h>

using namespace std;

/*Program to demonstrate simple multiple inheritence*/

class Fish{
	public: 
		void swim(){
			cout<<"\n In method swim"<<endl;
		}	
};

class Woman{
	public: 
		void walk(){
			cout<<"\n In method walk"<<endl;
		}
};

class Mermaid : public Woman, public Fish{
	
};

int main(){
	Mermaid naeem;
	naeem.walk();
	naeem.swim();
	system("PAUSE");
	return 0;
	
}