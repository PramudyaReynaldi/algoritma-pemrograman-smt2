#include <iostream>
using namespace std;

void duplicate (int &a, int &b, int &c) {
	
	cout << "=============================\n";
	cout << "\t POINTER 7 \n";
	cout << "=============================\n";
	
	a*= 2;
	b*= 2;
	c*= 2;
}
int main () {
	int x = 1, y = 3, z = 7;
	
	duplicate (x, y, z);
	cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
	
	cout << "====================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "====================================\n";
	
	return 0;
}