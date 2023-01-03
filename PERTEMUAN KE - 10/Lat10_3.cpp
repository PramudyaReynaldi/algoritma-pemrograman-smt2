#include <iostream>
using namespace std;

int main () {
	int num [10];
	int *start, *end;
	
	cout << "=============================\n";
	cout << "\t POINTER 2 \n";
	cout << "=============================\n";
	
	start = num;
	end = &num [9];
	
	while (start != end) {
		cout << "Masukan bilangan : ";
		cin >> *start;
		start++;
	}
	cout << "====================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "====================================\n";
	
	
	return 0;
}