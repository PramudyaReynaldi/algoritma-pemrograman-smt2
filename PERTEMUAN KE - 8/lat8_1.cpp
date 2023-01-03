#include <iostream>
#include <stdio.h>
#define SIZE 12
using namespace std;

main () {
	
	int a [SIZE] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
	int index, total = 0;
	
	for (index = 0; index <= SIZE-1; index++) {
		total += a [index];
	} 
	printf ("\nTotal setiap elemen array adalah %d", total);
	cout << endl;
	
	cout << "=======================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "=======================================";
	
	return 0;
}