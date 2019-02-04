#include <iostream>

void change(int orig) {
	orig = 20;
	std::cout << "Value of Orig in fn change()= " << orig<< std::endl;
}

void main() {
	int orig = 10;
	std::cout << "Value of orig= " << orig << std::endl;
	change(orig);
	std::cout << "Value of orig after change()= " << orig<< std::endl;
	
	std::cin.get();
}