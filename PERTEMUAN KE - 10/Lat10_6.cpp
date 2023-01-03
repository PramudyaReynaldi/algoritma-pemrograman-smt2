#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main () {
	
	int x, *p, **q;
	
	cout << "=============================\n";
	cout << "\t POINTER 6 \n";
	cout << "=============================\n";
	
	x = 10;
	p = &x;
	q = &p;
	
	cout << **q;
	cout << endl;
	
	cout << "====================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "====================================\n";
	
	return 0;
	
}