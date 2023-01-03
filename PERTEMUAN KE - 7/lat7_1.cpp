#include <stdio.h>
int factorial (int n) {
	if (n == 1) {
		return (1);
	} else {
		return (n * factorial (n - 1));
	}
}

main () {
	int x;
	printf ("Mencari nilai factorial\n");
	printf ("Masukan nilai x : ");
	scanf ("%d", &x);
	printf ("Nilai factorial dati %d = %d\n", x, factorial(x));
}