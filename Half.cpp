//Brennan Catalan
//12/1/2021
//CIS 1202 502
#include "Half.h"
#include <cmath>
using namespace std;





int Half(int num)
{
	float halvedNum = static_cast<float>(num) / 2; // The int is casted to a float and then divided. It has to be casted before the division or else anything after the decimal place will be truncated, which causes the rounding to work incorrectly
	int halfNum= round(halvedNum);//The new number is rounded and assigned to an int variable
	return halfNum;

}