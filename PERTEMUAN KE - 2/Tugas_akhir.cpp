#include <stdio.h>
#include <iostream>

using namespace std;

main () {
	
	int kode_hari;
	
	printf ("=====================================\n");
	printf ("PROGRAM MEMBUAT KODE HARI\n");
	printf ("=====================================\n");
	
	printf ("Masukan kode hari [1-7] : ");
	scanf ("%d", &kode_hari);
	
	switch (kode_hari) {
		case 1:
			printf ("Senin"); break;
		case 2:
			printf ("Selasa"); break;
		case 3:
			printf ("Rabu"); break;
		case 4:
			printf ("Kamis"); break;
		case 5:
			printf ("Jumat"); break;
		case 6:
			printf ("Sabtu"); break;
		case 7:
			printf ("Minggu"); break;
		default:
			printf ("kode tidak ada\n");
	}
	
	printf ("\n");
	
	printf ("===================================\n");
	printf ("NAMA\t : PRAMUDYA REYNALDI SALIM\n");
	printf ("NIM\t : 211011450389\n");
	printf ("KELAS\t : 02TPLE004\n");
	printf ("====================================\n");
	
	return 0;
}