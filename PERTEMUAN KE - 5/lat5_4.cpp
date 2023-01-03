#include <iostream>
#include <ctype.h>
#include <conio.h>
using namespace std;

int main () {
	
	int counter, n, last = 1, next = 0, sum;
	
	cout << "Masukan angka : ";
	cin >> n;
	
	while (next < n / 2) {
		cout << " " << last;
		sum = next + last;
		next = last;
		last = sum;	
	}
	getch();
	
	cout << endl;
	
	cout << "=======================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "=======================================";	
}