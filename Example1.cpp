/*Calling overloaded function test() with different argument/s.*/

#include <iostream> 
using namespace std;
void test(int);
void test(float);
void test(int, float);
int main() {
	int a = 5;
	float b = 5.5;

	test(a);
	test(b);
	test(a, b);

	system("pause");
	return 0;
}

void test(int var) {
	cout << "Integer number: " << var << endl;
}

void test(float var) {
	cout << "Float number: " << var << endl;
}

void test(int var1, float var2) {
	cout << "Integer number: " << var1; cout << " And float number: " << var2 << endl;
}