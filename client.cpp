#include"Vehicle.h"

int main() {

	//1. Create one object of class Vehicle.
	Vehicle v1;

	//2. Call accept() and display().
	v1.accept();
	v1.display();

	//3. Update price using setter.
	v1.setPrice(1200000);

	//4. Print updated price using getter.
	cout<<"Price After update : "<<v1.getPrice();

	//5. Display resale value.
	v1.calculateResaleValue();
}