#include <iostream>

using namespace std;

int Mul(int a, int b){
    return a*b;
}

//This is repeating itself, time-consuming
/**
int main()
{
    int result = Mul(2,3);
    cout << result << endl;

    int result2 = Mul(33,55);
    cout << result2 << endl;
}
**/
void MulAndLog(int a, int b){
    int result = Mul(a,b);
    cout << result << endl;
}

int main(){
    MulAndLog(55,3);
    MulAndLog(2,3);
}




