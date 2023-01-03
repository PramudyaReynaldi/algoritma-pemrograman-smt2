#include <stdio.h>
void tukar (int x, int y);
main () {
	int a, b;
	
	a = 99;
	b = 11;
	
	printf ("Nilai sebelum pemanggilan fungsi : \n");
	printf ("Nilai a - %d nilai b - %d \n\n", a, b);
	tukar (a, b);
	
	printf ("Nilai sesudah pemanggilan fungsi : \n");
	printf ("Nilai a = %d nilai b = %d\n\n", a, b);
}

void tukar (int px, int py) {
	int z;
	z = px;
	px = py;
	py = z;
	printf ("Nilai diakhir fungsi : \n");
	printf ("Nilai px = %d nilai py = %d\n\n", px, py);
}