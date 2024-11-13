#include <iostream>

using namespace std;

class X{
	friend class Y;
	private: 
		int x_var1, x_var2;
	public: 
	
};

class Y{
	private:
		int y_var1, y_var2;
		X objX;
	public:
		void setX(int someValue){
			objX.x_var1=someValue;
		}
		int getX(){
			return objX.x_var1;
		}
};


int main(){
	Y objY;
	objY.setX(29);
	cout<<"Value of x_var1 from Y class is: "<<objY.getX()<<endl;
	return 0;
}