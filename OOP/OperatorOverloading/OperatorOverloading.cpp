#include <iostream>
using namespace std;

class Complex{
	private: 
		double real, img;
	public:
			Complex Add(const Complex &);
			void setRealAndImg(double a,double b){
				real=a;
				img=b;
			}
			void getRealAndImg(){
				cout<<"Real is: "<<real<<endl;
				cout<<"Img is: "<<img<<endl;
			}
};
Complex Complex::Add(const Complex & c1){
	Complex t;
	t.real=real+c1.real;
	t.img=img+c1.img;
	return t;
}

int main(){
	Complex c1;
	c1.setRealAndImg(5,3);
	// c1.real = 5 && c1.img = 3
	Complex c2;
	c2.setRealAndImg(2,7);
	// c2.real = 2 && c2.img 7
	
	Complex c3=c1.Add(c2);
	// c3.real = 7 && c3.img=10
	
	//moment of truth
	cout<<"Results of c3 are: "<<endl;
	c3.getRealAndImg();
	cout<<endl;
	
	return 0;
}