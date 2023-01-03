#include <stdio.h>
#include <ctype.h>

int main (void){
	
	char c = 'C';
	
	printf("=================================\n");
	printf("\t LAPORAN KE - 8\n");
	printf("=================================\n");
	
	if (isalpha (c)) {
		printf ("%c is alphabetical\n", c);
	}
	else {
		printf ("%c is not alphabetical\n", c);
	}
	printf ("========================================\n");
	printf ("NAMA\t: PRAMUDYA REYNALDI SALIM\n");
	printf ("NIM\t: 211011450389\n");
	printf ("KELAS\t: 02TPLE004\n");
	printf ("========================================\n");
	
	return 0;
	
}