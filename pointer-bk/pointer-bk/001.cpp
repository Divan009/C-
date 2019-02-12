#include <iostream>


void main() {
	int *p, *q;
	int z;
	p = &z;
	*p = 63;
	q = p;
	*q = 33;
	std::cin.get();
}
