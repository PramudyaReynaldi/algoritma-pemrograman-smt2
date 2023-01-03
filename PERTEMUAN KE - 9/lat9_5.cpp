#include <string.h>
#include <stdio.h>
int main (void) {
	char str1 [10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
	char str2 [10];
	
	strcpy (str2, str1);
	
	printf ("%s\n", str2);
	
	printf ("========================================\n");
	printf ("NAMA\t: PRAMUDYA REYNALDI SALIM\n");
	printf ("NIM\t: 211011450389\n");
	printf ("KELAS\t: 02TPLE004\n");
	printf ("========================================\n");
	
	return 0;
}