#include <iostream>

int main() {
	int *ptr;
	int var = 7;
	int foo = 27;
	ptr = &var;
	int& ref = foo;
	ptr = &ref;
	std::cout << &ref << std::endl;
}