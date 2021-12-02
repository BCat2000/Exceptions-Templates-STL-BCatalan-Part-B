//Brennan Catalan
//12/1/2021
//CIS 1202 502

#include <iostream>
#include "Half.h"
#include <iomanip>

using namespace std;







int main()
{
	int number1 = 13;
	float number2 = 15.295;
	double number3 = 17.216;

	cout << "Halving an int...("<<number1<<")" << endl;
	int numInt = Half(number1);
	cout << numInt <<endl <<endl;

	cout << "Halving a float...("<<number2<<")" << endl;
	float numFloat = Half(number2);
	cout << setprecision(3) << numFloat << endl << endl;

	cout << setprecision(5) << "Halving a double...(" << number3 << ")" << endl;
	double numDouble = Half(number3);
	cout << setprecision(3) << numDouble;
	


}

