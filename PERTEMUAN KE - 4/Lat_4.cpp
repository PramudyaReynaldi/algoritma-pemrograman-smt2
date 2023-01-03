#include <iostream>
using namespace std;

int main () {
	
	cout << "===================================\n";
	cout << "PROGRAM MENGHITUNG GANJIL GENAP\n";
	cout << "===================================\n";
	
	int batas;
	
	cout << "Masukan batas : ";
	cin >> batas;
	cout << endl;
	
	cout << "Ganjil : " << endl;
	for (int i = 1; i <= batas; i++) {
		if (i % 2 != 0 ) {
			cout << i << " "; 
		}
	}
	cout << endl;
	
	cout << "Genap : " << endl; 
	for (int j = 1; j <= batas; j++) {
		if (j % 2 == 0) {
			cout << j << " ";
		}
	}
	cout << endl;
	
	cout << "=======================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "=======================================";	
	
}