#include <iostream>
using namespace std;

int main () {
	int *ptr, num;
	
	cout << "=============================\n";
	cout << "\t POINTER 2 \n";
	cout << "=============================\n";
	
	ptr = &num;
	*ptr = 100;
	cout << num << " ";
	(*ptr)++;
	(*ptr)*2;
	cout << num << endl;
	
	cout << "====================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "====================================\n";
	
	return 0;
}