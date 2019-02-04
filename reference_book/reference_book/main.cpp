#include <iostream>

void change2(int& a) {
	a = 20;
	std::cout << "Value of Orig in fn change()= " << a << std::endl;
}

void main() {
	int orig = 10;
	std::cout << "Value of orig= " << orig << std::endl;
	change2(orig);
	std::cout << "Value of orig after change()= " << orig << std::endl;

	std::cin.get();
}