#include <iostream>
#include <ctype.h>
#include <conio.h>
using namespace std;

int main () {
	
	int deret, i = 1;
	
	cout << "=================================================\n";
	cout << "\t PROGRAM BILANGAN DERET GANJIL GENAP \n";
	cout << "=================================================\n";
	
	cout << "Masukan deret : ";
	cin >> deret;
	
	while (i <= deret) {
		if (i == 1) {
			cout << "Ganjil\t : ";
		}
		if (i % 2 != 0) {
			cout << " " << i;
		}
		i++;
	}
	cout << endl;
	i = 1;
	while (i <= deret) {
		if (i == 2) {
			cout << "Genap\t : ";
		}
		if (i % 2 == 0) {
			cout << " " << i;
		}
		i++;
	}
	getch();
	
	cout << endl;
	
	cout << "=======================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "=======================================";	
}