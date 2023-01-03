#include <iostream>
using namespace std;

int main () {
	
	int bil;
	
	cout << "=====================================================\n";
	cout << "PROGRAM MENGHITUNG BILANGAN BULAT POSITIF DAN NEGATIF\n";
	cout << "=====================================================\n";
	
	cout << "Masukan bilangan : ";
	cin >> bil;
	
	if (bil > 0) {
		cout << "Bilangan " << bil << " adalah bilangan positif";
	} else if (bil < 0) {
		cout << "Bilangan " << bil << " adalah bilangan negatif";
	} else if (bil == 0) {
		cout << "Blangan nol";
	}
	
	cout << endl; 
	
	cout << "=======================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "=======================================";
}