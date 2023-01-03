#include <iostream>
using namespace std;

int factorial (int n) {
	
	if (n == 1) {
		return (1);
	}
	else {
		return (n * factorial (n - 1));
	}
}
main () {
	int x;
	
	cout << "===============================\n";
	cout << "PROGRAM MENCARI NILAI FACTORIAL\n";
	cout << "===============================\n";
	
	cout << "Masukan nilai x : ";
	cin >> x;
	cout << "Nilai factorial dari " << x << "=" << factorial(x); 
}