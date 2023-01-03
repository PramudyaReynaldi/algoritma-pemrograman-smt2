#include <iostream>
using namespace std;

int mult (int x, int y, int z);

int main () {
	
	int x, y, z;
	
	cout << "Masukan bilangan pertama : ";
	cin >> x;
	cout << "Masukan bilangan kedua : ";
	cin >> y;
	cout << "Masukan bilangan ketiga : ";
	cin >> z;
	
	cout << "Hasil perkalian dari bilangan tersebut adalah : " << mult (x, y, z);
	
	cout << endl;
	
	cout << "=======================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "=======================================";
	
	return 0;
}
int mult (int x, int y, int z) {
	return x * y * z;
}