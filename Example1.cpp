/**
* @file Example1.cpp
*
* @brief Calling overloaded function test() with different argument/s.
*
* @author Saif Ullah Ijaz
*
*/

#include <iostream> 
using namespace std;

// FUNCTION PROTOTYPE (DECLARATION)

/** function that tests an integer value.
*
* @param var The integer number to be tested.
*
* @return void.
*/
void test(int);

/**
# @overload void test(float);
*/
void test(float);

/**
# @overload void test(int, float);
*/
void test(int, float);

// function main begins program execution
int main() {
	int a = 5;
	float b = 5.5;

	test(a);
	test(b);
	test(a, b);

	system("pause");
	return 0;
}
// end main 

// FUNCTION DEFINITION

// takes integer as input
void test(int var) {
	cout << "Integer number: " << var << endl;
}
// end function test

// takes float as input
void test(float var) {
	cout << "Float number: " << var << endl;
}
// end function test

// takes integer & float as input
void test(int var1, float var2) {
	cout << "Integer number: " << var1; cout << " And float number: " << var2 << endl;
}
// end function test
