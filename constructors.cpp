#include <iostream>
using namespace std;

class Entity{
public:
	float X,Y;

	Entity(float x, float y){
		X=x;
		Y=y; //assigning parameters to member variables
	}

	void Print(){
		cout << X << "," << Y << endl;
	}
};

int main(){
	Entity e(10.5f, 5.0f);
	e.Print();
	std::cin.get();
}