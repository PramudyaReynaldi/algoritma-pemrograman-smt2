#include <stdio.h>

main () {
	
	int nilai, tugas;
	
	printf ("================================================\n");
	printf ("\tPROGRAM MENGHITUNG NILAI DAN TUGAS\n");
	printf ("================================================\n\n");
	
	printf ("Masukan nilai : ");
	scanf ("%d", &nilai);
	printf ("Masukan tugas : ");
	scanf ("%d", &tugas);
	
	if (nilai && tugas > 75) {
		printf ("Anda lulus\n");
	}
	else {
		printf ("Anda tidak lulus\n\n");
	}
	printf ("<><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
	printf ("\tNAMA\t: PRAMUDYA REYNALDI SALIM\n");
	printf ("\tNIM\t: 211011450389\n");
	printf ("\tKELAS\t: 02TPLE004\n");
	printf ("<><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\n");
	
}