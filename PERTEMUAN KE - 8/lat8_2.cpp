#include <stdio.h>
#include <iostream>
using namespace std;

main () {
	
	int square [100];
	int i, k;
	
	cout << "========================================\n";
	cout << " \t PROGRAM BILANGAN PANGKAT \n";
	cout << "========================================\n";
	
	for (i = 0; i < 10; i++) {
		k = i + 1;
		square [i] = k * k;
		printf ("\nPangkat dari %d adalah %d", k, square [i]);
	}
	cout << endl;
	
	cout << "=======================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "=======================================";
	
	return 0;
}