#include <iostream>


#define LOG(x) std::cout << x << std::endl;

class Car{
public:
	std::string color;
	int tyre;

	void printColor();

	void numOfTyre() {
		std::cout << "Number of tyre is: " << numOfTyre << std::endl;
	}
};

void Car::printColor() {
	std::cout << "I want this color: " << printColor << std::endl;
}

int main() {
	Car Audi;
	Audi.numOfTyre = 4;
	Audi.printColor = "white";

	Car Truck;
	Truck.numOfTyre = 6;
	Truck.printColor = "Red";
}




