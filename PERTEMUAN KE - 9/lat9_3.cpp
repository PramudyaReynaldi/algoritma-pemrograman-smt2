#include <stdio.h>
#include <ctype.h>

int main (void){
	char c = 'C';
	
	printf("=================================\n");
	printf("\t LAPORAN KE - 8\n");
	printf("=================================\n");
	
	if (islower (c)) {
		printf ("%c is lower case character \n ", c);
	}
	else {
		printf ("%c is not lower chace character \n ", c);
	}
	printf ("========================================\n");
	printf ("NAMA\t: PRAMUDYA REYNALDI SALIM\n");
	printf ("NIM\t: 211011450389\n");
	printf ("KELAS\t: 02TPLE004\n");
	printf ("========================================\n");
	
	return 0;
}