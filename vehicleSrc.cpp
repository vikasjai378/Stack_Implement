#include"Vehicle.h"

//1. Default Constructor
Vehicle::Vehicle() {
	vehicleNum = "Not registered";
	brand = "unknown";
	model = "unknown";
	price = 0.0;
	mileage = 0.0;
}

//2. Accept Function
void Vehicle::accept() {
	cout << "\nEnter Vehicle Details : /n";
	cout << "\nEnter Vehicle Num: ";
	cin >> vehicleNum;
	cout << "\nEnter Brand : ";
	cin >> brand;
	cout << "\nModel : ";
	cin >> model;
	cout << "\nEnter price : ";
	cin >> price;
	cout << "\nEnter Mileage : ";
	cin >> mileage;
}

//3. Display Function
void Vehicle::display() {
	cout << "\nVehicle Number : " << vehicleNum;
	cout << "\nBrand : " << brand;
	cout << "\nModel : " << model;
	cout << "\nPrice : " << price;
	cout << "\nMileage : " << mileage;
}

//4 getters
string Vehicle::getVehicleNum(){
	return vehicleNum;
}
string Vehicle::getBrand(){
	return brand;
}
string Vehicle::getModel(){
	return model;
}
float Vehicle::getPrice(){
	return price;
}
float Vehicle::getMileage() {
	return mileage;
}

//5. Setters
void Vehicle::setVehicleNum(string num) {
	vehicleNum = num;
}

void Vehicle::setBrand(string b) {
	brand = b;
}

void Vehicle::setModel(string m) {
	model = m;
}

void Vehicle::setPrice(float p) {
	price = p;
}

void Vehicle::setMileage(float m) {
	mileage = m;
}

//6.Additional Function
void Vehicle::calculateResaleValue() {
	float resaleValue = price * 0.8;
	cout << "\nResale Value = " << resaleValue << endl;
}