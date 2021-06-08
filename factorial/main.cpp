#include <iostream>
using namespace std;


// Head Recursion - stores the states in the stack
int factorialH(int n) {
	if (n == 1) return 1;
	return n * factorialH(n - 1);
}

// Tail Recursion - memory efficient - no states are stored in the stack
int factorialT(int n, int accumulator) {
	if (n == 1) return accumulator;
	return  factorialT(n - 1, n * accumulator);
}


int main() {

	cout << endl << "**********FACTORIAL**********" << endl << endl;

	cout << "Head recursion implementation of factorial:" << endl;
	cout << factorialH(5) << endl;

	cout << endl;
	// The accumulator tracks the result so far
	int accumulator = 1;

	cout << "Tail recursion implementation of factorial:" << endl;
	cout << factorialT(5, accumulator) << endl;

	return 0;
}