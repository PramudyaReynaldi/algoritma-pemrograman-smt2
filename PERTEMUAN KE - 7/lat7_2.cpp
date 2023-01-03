#include <stdio.h>
int findMax (int n1, int n2);
void printMax (int m);
main () {
	int i = 5;
	int j = 7;
	int k;
	k = findMax(i, j);
	printMax (k);
}

int findMax (int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	else {
		return n2;
	}
}

void printMax (int m) {
	printf ("Bilangan yang terbesar adalah : %d\n", m);
}
