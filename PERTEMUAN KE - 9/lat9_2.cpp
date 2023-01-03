#include <stdio.h>
#include <ctype.h>

int main (void) {
	
	char c = '1';
	
	printf("=================================\n");
	printf("\t LAPORAN KE - 8\n");
	printf("=================================\n");
	
	if (isdigit (c)) {
		printf ("%c is a digit\n", c);
	}
	else {
		printf ("%c is not a digit\n", c);
	}
	printf ("========================================\n");
	printf ("NAMA\t: PRAMUDYA REYNALDI SALIM\n");
	printf ("NIM\t: 211011450389\n");
	printf ("KELAS\t: 02TPLE004\n");
	printf ("========================================\n");
	
	return 0;
}