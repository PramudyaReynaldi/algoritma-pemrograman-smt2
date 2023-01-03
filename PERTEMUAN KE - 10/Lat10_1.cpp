#include <iostream>
using namespace std;

int main (void) {
	int v = 7, *p;
	
	cout << "=============================\n";
	cout << "\t POINTER 1 \n";
	cout << "=============================\n";
	
	p = &v;
	cout << "Nilai v = " << v << "dan *p = " << *p << endl;
	cout << "alamatnya = " << p << endl;
	
	cout << "====================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "====================================\n";
}