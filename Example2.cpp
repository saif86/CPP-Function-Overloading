/**
* @file Example2.cpp
*
* @brief C++ Program to return absolute value of variable types
* integer and float using function overloading.
*
* @author Saif Ullah Ijaz
*
*/

#include <iostream> 
using namespace std;

// FUNCTION PROTOTYPE (DECLARATION)

/** function that returns absoulte of an integer.
*
* @param var The integer number to find absolute.
*
* @return absolute value of the integer input.
*/
int absolute(int);

/**
# @overload float absolute(float);
*/
float absolute(float);

// function main begins program execution
int main() {
	int a = -5;
	float b = 5.5;
	cout << "Absolute value of " << a << " = " << absolute(a) << endl;
	cout << "Absolute value of " << b << " = " << absolute(b) << endl;

	system("pause");
	return 0;
}
// end main 

// FUNCTION DEFINITION

// takes integer as input
int absolute(int var) {
	if (var < 0)
		var = -var;
	return var;
}
// end function absolute

// takes float as input
float absolute(float var) {
	if (var < 0.0)
		var = -var;
	return var;
}
// end function absolute
