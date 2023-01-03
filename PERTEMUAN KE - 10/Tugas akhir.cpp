#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char *str; // deklarasikan variabel pointer str
	int count = 0; // deklarasikan variabel count dengan nilai 0
	
	cout << "Masukkan sebuah string: ";
	cin >> str; // masukkan string ke dalam variabel str
	
	// perulangan untuk menghitung jumlah karakter dalam string
	for (int i = 0; str[i] != '\0'; i++) {
		count++;
	}

	cout << "Jumlah karakter dalam string adalah: " << count << endl;

return 0;
}