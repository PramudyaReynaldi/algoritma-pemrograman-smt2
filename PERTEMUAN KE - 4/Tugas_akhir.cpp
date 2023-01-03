#include <iostream>
using namespace std;

int main () {
	
	cout << "=================================================\n";
	cout << "PROGRAM MENGHITUNG BATAS DERET BILANGAN FIBONACCI\n";
	cout << "=================================================\n";
	
	int n, f1 = 0, f2 = 1, berikutnya = 0;
	
	cout << "Masukan batas deret bilangan fibonacci : ";
	cin >> n;
	cout << endl;
	
	cout << "Deret fibonacci : " << endl;
	for (int i = 1; i <= n; ++i) {
		if (i == 1) {
			cout << " " << f1 << " ";
			continue;
		}
		if (i == 2) {
			cout << " " << f2 << " ";
			continue;
		}
		berikutnya = f1 + f2;
		f1 = f2;
		f2 = berikutnya;
		cout << berikutnya << " ";
	}
	return 0;
}