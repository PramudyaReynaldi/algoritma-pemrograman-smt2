#include <iostream>
#include <limits.h>
using namespace std;

int main () {
	
	int diskon, totalAkhir, harga;
	
	cout << "==================================\n";
	cout << "PROGRAM MENGHITUNG BONUS PEMBELIAN\n";
	cout << "==================================\n";
	
	cout << "Masukan total pembelian : ";
	cin >> harga;
	
	switch (harga) {
		case 100000 ... 200000-1:
			cout << "Kamu mendapatkan diskon 5%" << endl;
			diskon = harga * 0.05;
			totalAkhir = harga - diskon;
			cout << "Total bayar kamu menjadi : " << totalAkhir;
			break;
		case 200000 ... 300000-1:
			cout << "Selamat, kamu mendapatkan tiket ke Jogja" << endl;
			break;
		case 300000 ... 400000-1:
			cout << "Selamat, kamu mendapatkan tiket ke Bali" << endl;
			break;
		case 400000 ... 500000-1:
			cout << "Selamat, kamu mendapatkan jam tangan Rolex" << endl;
			break;
		case 500000 ... INT_MAX:
			cout << "Selamat, kamu mendapatkan tiket ke Swiss" << endl;
			break;
		default:
			cout << "Kamu tidak mendapatkan bonus";
			cout << endl;	
	}
	cout << "=======================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "=======================================";
}