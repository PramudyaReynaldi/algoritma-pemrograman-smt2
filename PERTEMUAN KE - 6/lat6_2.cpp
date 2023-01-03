#include <iostream>
using namespace std;

int findMax (int n1, int n2);
void printMax (int n);

main () {
	int i = 5;
	int j = 7;
	int k;
	k = findMax (i, j);
	printMax (k);
}

int findMax (int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	else {
		return n2;
	}
}

void printMax (int m) {
	cout << "Bilangan yang terbesar adalah : " << m;
	
	cout << endl;
	
	cout << "=======================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "=======================================";
}

	