#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int main () {
	
	long int kode, jumlah, sks, semester;
	char nama [100];
	
	cout << "==========================================\n";
	cout << "PROGRAM MENGHITUNG PEMBAYARAN PER SEMESTER\n";
	cout << "==========================================\n";
	
	cout << "Masukan kode [1-3] : ";
	cin >> kode;
	cout << "Masukan jumlah sks per semester [20-25] : ";
	cin >> sks;
	
	if (kode == 1) {
		strcpy (nama, "Teknik Informatika");
		jumlah = 30000 * sks;
		semester = jumlah * 2;
	} 
	else if (kode == 2) {
		strcpy (nama, "Akutansi");
		jumlah = 20000 * sks;
		semester = jumlah * 2;
	}
	else if (kode == 3) {
		strcpy (nama, "Manajemen");
		jumlah = 15000 * sks;
		semester = jumlah * 2;
	}
	cout << "=======================================\n";
	cout << "Jurusan : " << nama << endl;
	cout << "Pembayaran dalam satu semester : " << jumlah <<endl;
	cout << "Pembayaran dalam satu tahun : " << semester << endl;
	cout << "=======================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "=======================================";
}