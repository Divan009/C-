#include <iostream>

//int i = 0; //i can get manipulated elsewhere (a)
void Func() {
	//int i = 0; //i keeps getting innitialised to 0 w every call
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}

int main() {
	Func();
    //i = 13; //i is getting manipulated (a)
	Func();
	Func();
	Func();
	Func();
	std::cin.get();
}