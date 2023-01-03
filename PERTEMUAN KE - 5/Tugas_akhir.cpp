#include <iostream>
using namespace std;

int main () {
	
	int bil = 0, bil2 = 1, berikutnya = 0;
	
	cout << "=============================\n";
	cout << "\t FIBONACCI \n";
	cout << "=============================\n";
	
	cout << "Fibonacci : " << bil << " " << bil2 << " ";
	
	while (berikutnya < 89) {
		berikutnya = bil + bil2;
		bil = bil2;
		bil2 = berikutnya;
		
		cout << berikutnya << " ";
	}
	cout << endl;
	
	cout << "=======================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "=======================================";	
}