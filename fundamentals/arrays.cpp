#include <iostream>
#include <string>

using namespace std;

int main(){
	string firstCar= "Honda ";
	string secondCar = "Toyota ";
	string thirdCar = "Hyundai ";
	string fourthCar = "Suzuki ";
	
	//declaring an array
	string carsArray[5] = {"Honda", "Toyota", "Hyundai", "Suzuki","BMW"};
//	carsArray[4]="Mercedes";
	cout<<"Selected car is: "<<carsArray[4]<<"\n";
	int getArrayLength = sizeof(carsArray) / sizeof(string);
	cout<<"Length of our array is: "<<getArrayLength<<"\n";
	
	int modelsArray[5] = {2000, 1995, 2001, 2024, 2020}; 
	cout<<"Selected model is: "<<modelsArray[4]<<"\n";
	
	int getLengthOfModels = sizeof(modelsArray) / sizeof(int);
	cout<<"Length of models array is: "<<getLengthOfModels;
//	cout<<"Cars are: "<<firstCar<<secondCar<<thirdCar<<fourthCar;
	return 0;
}