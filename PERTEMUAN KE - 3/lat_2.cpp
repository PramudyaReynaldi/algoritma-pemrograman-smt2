#include <iostream>
using namespace std;

int main () {
	
	char kode;
	
	cout << "=============================================================================\n";
	cout << "PROGRAM MENGHITUNG LUAS DAN KELILING SEGITIGA, PERSEGI PANJANG, DAN LINGKARAN\n";
	cout << "=============================================================================\n";
	
//	S = SEGITIGA P = PERSEGI PANJANG L = LINGKARAN
	cout << "Masukan kode [S, P, L] : ";
	cin >> kode;
	
	switch (kode) {
		case 'S':
		int panjangA, panjangB, alas, tinggi, kelilingSegitiga, luasSegitiga;
		
		cout << "=====================================\n";
		cout << "MENGHITUNG LUAS DAN KELILING SEGITIGA\n";
		cout << "=====================================\n";
		
		cout << "Masukan panjang sisi A : ";
		cin >> panjangA;
		cout << "Masukan panjang sisi B : ";
		cin >> panjangB;
		cout << "Masukan alas segitiga : ";
		cin >> alas;
		cout << "Masukan tinggi segitiga : ";
		cin >> tinggi;
		cout << endl;
		
		//		MENGHITUNG KELILING SEGITIGA
		kelilingSegitiga = panjangA + panjangB + alas;
		cout << "Keliling segitiga adalah : " << kelilingSegitiga << endl;
		
		//		MENGHITUNG LUAS SEGITIGA
		luasSegitiga = 0.5 * alas * tinggi;
		cout << "Luas segitiga adalah : " << luasSegitiga << endl;
		
		break;
		case 'P':
			int panjangPersegi, lebarPersegi, luasPersegi, kelilingPersegi;
			cout << "============================================\n";
			cout << "MENGHITUNG LUAS DAN KELILING PERSEGI PANJANG\n";
			cout << "============================================\n";
			
			cout << "Masukan panjang persegi : ";
			cin >> panjangPersegi;
			cout << "Masukan lebar persegi : ";
			cin >> lebarPersegi;
			
			//			MENGHITUNG LUAS PERSEGI PANJANG
			luasPersegi = panjangPersegi * lebarPersegi;
			cout << "Luas persegi panjang adalah : " << luasPersegi << endl;
			
			//			MENGHITUNG KELILING PERSEGI
			kelilingPersegi = (2 * panjangPersegi) + (2 * lebarPersegi);
			cout << "Keliling persegi panjang adalah : " << kelilingPersegi << endl;
			
		break;
		case 'L':
			int jariJari, kelilingLingkaran, luasLingkaran;
			cout << "======================================\n";
			cout << "MENGHITUNG LUAS DAN KELILING LINGKARAN\n";
			cout << "======================================\n";
				
			cout << "Masukan jari - jari lingkaran : ";
			cin >> jariJari;
				
			//				MENGHITUNG KELILING LINGKARAN
			kelilingLingkaran = 3.14 * 2 * jariJari;
			cout << "Keliling lingkaran adalah : " << kelilingLingkaran << endl;
				
			//				MENGHITUNG LUAS LINGKARAN
			luasLingkaran = 3.14 * jariJari * jariJari;
			cout << "Luas lingkaran adalah : " << luasLingkaran << endl;
				
		break;
		default:
			cout << "Kode salah" << endl;
	}
	cout << "=======================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "=======================================";
}