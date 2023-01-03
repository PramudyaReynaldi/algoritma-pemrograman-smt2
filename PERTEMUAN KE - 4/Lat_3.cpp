#include <iostream>
using namespace std;

int main () {
	
	cout << "=============================\n";
	cout << "\t LOOPING 3 \n";
	cout << "=============================\n";
	
	int n = 1;
	cetak:
		cout << "C++ Sangat mudah\n";
		if (n++ < 10) {
			goto cetak;
		}
	cout << "=======================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "=======================================";	
		
}