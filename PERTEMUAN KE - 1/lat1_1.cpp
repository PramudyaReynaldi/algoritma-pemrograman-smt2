#include <stdio.h>

main () {
	
	float luas, volume, pi, r;
	pi = 3.14;
	r = 7;
	
	luas = 4 * pi * r * r;
	volume = 4/3 * pi * r * r * r;
	
	printf ("\t==========================================\n");
	printf ("\tProgram menghitung luas dan permukaan bola\n");
	printf ("\t==========================================\n\n");
	
	printf ("luas permukaan bola adalah : %f\n", luas);
	printf ("Volume permukaan bola adalah : %f\n\n", volume);
	

}