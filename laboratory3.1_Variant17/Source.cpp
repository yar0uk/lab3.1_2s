#include "Complex.h"
using namespace std;

int main()
{
	Pair pair(10, 23);
	Complex complex1(4, 5);
	Complex complex2(pair);

	cout << "complex1: " << complex1 << endl;
	cout << "complex2: " << complex2 << endl;

	Complex addOperation = complex1 + complex2;
	Complex multiplicationOperation = complex1 * complex2;
	Complex subtractionOperation = complex2 - complex1;

	cout << "Add operation: " << addOperation << endl;
	cout << "Multiplication operation: " << multiplicationOperation << endl;
	cout << "Subtraction operation: " << subtractionOperation << endl;
	return 0;
}