#include <iostream>
using namespace std;

long fibonacci (long n) {
	
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return fibonacci (n - 1) + fibonacci (n - 2);
	}
}
main () {
	int x;
	
	cout << "Masukan nilai fibonacci" << endl;
	cout << "Masukan nilai x : ";
	cin >> x;
	cout << "Nilai fibonacci dari " << x << " adalah " << fibonacci(x);
	cout << endl;
	
	cout << "=======================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "=======================================";
}
