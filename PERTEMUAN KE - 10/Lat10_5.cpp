#include <iostream>
using namespace std;

int main () {
	
	int numbers [5], *p;
	
	cout << "=============================\n";
	cout << "\t POINTER 5 \n";
	cout << "=============================\n";
	
	p = numbers;
	*p = 10;
	p++;
	*p = 20;
	p = &numbers [2];
	*p = 30;
	p = numbers + 3;
	*p = 40;
	p = numbers;
	*(p + 4) = 50;
	
	for (int n = 0; n < 5; n++) {
		cout << numbers [n] << ",";
	}
	cout << endl;
	
	cout << "====================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "====================================\n";
	
	return 0;
}