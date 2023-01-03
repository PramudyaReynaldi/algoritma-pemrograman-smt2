#include <iostream>
using namespace std;

void tukar (int x, int y);
main () {
	int a, b;
	
	a = 99;
	b = 11;
	
	cout << "=======================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "=======================================\n";
	
	cout << "Nilai sebelum pengambilan fungsi\n";
	cout << "Nilai a - " << a << " nilai b - " << b << endl;
	cout << "--------------------------------\n";
	tukar (a, b);
	cout << "Nilai sesudah pemanggilan fungsi : \n";
	cout << "Nilai a = " << a << " nilai b = " << b << endl;
	cout << "--------------------------------\n";
}
void tukar (int px, int py) {
	int z;
	z = px;
	px = py;
	py = z;
	cout << "Nilai diakhiri fungsi : " << endl;
	cout << "Nilai px = " << px << " nilai py = " << py << endl;
	cout << "--------------------------------\n";
	
	
}
	