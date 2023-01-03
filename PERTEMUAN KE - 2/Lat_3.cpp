#include <iostream>
using namespace std;

int main () {
	
	int nilai;
	
	cout << "===========================\n";
	cout << "PROGRAM MEMBUAT NILAI A - E\n";
	cout << "===========================\n";
	
	cout << "Masukan nilai : ";
	cin >> nilai;
	
	if (nilai >= 81 && nilai <= 90) {
		cout << "Anda mendapatkan nilai A";
	}
	else if (nilai >= 71 && nilai <= 80) {
		cout << "Anda mendapatkan nilai B";
	}
	else if (nilai >= 61 && nilai <= 70) {
		cout << "Anda mendapatkan nilai C";
	}
	else if (nilai >= 51 && nilai <= 60) {
		cout << "Anda mendapatkan nilai D";
	}
	else if (nilai < 51) {
		cout << "Anda mendapatkan nilai E";
	}
	
	cout << endl;
	
	cout << "=======================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "=======================================";
}