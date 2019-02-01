#include <iostream>
#include "Log.h"

void InitLog() {
	Log("Initialising Log");
}

void Log(const char* msg) {
	std::cout << msg << std::endl;
}