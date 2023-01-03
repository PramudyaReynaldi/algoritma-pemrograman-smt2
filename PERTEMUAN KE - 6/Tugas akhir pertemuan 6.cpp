#include <iostream>
using namespace std;

void genap (int x);
void ganjil (int y);

main () {
	
	int bil;
	
	cout << "Masukan deret bilangan : ";
	cin >> bil;
	ganjil (bil);
	
	cout << endl;
	genap (bil);
}
void ganjil (int x) {
	for (int i = 0; i <= x; i++) {
		if (i == 1) {
			cout << "Ganjil : ";
			cout << " " << i;
		}
		else if (i % 2 != 0 ) {
			cout << " " << i;
		}
	}
}
void genap (int x) {
	for (int i = 1; i <= x; i++) {
		if (i == 2) {
			cout << "Genap : ";
			cout << " " << i;
		}
		else if (i % 2 == 0 ) {
			cout << " " << i;
		}
	}
	cout << endl;
	
	cout << "=======================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "=======================================";
}