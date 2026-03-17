#pragma once
#include<iostream>

using namespace std;

class Vehicle {
private:
	string vehicleNum;
	string brand;
	string model;
	float price;
	float mileage;
public:
	//1. Default Constructor
	Vehicle();

	//2. Accept Function
	void accept();

	//3. Display Function
	void display();

	//4 getters
	string getVehicleNum();
	string getBrand();
	string getModel();
	float getPrice();
	float getMileage();

	//5. Setters
	void setVehicleNum(string num);
	void setBrand(string b);
	void setModel(string m);
	void setPrice(float p);
	void setMileage(float m);

	//6.Additional Function
	void calculateResaleValue();
};
