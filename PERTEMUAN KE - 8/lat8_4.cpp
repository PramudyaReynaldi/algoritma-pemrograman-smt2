#include <iostream>
using namespace std;

int main() {
   int matrik[3][3];  // deklarasi matrik 3 x 3
	
	cout << "========================================================\n";
	cout << "\t PROGRAM MEMBUAT BILANGAN MATRIK 3 X 3 \n";
	cout << "========================================================\n";

   // mengisi elemen matrik
   matrik[0][0] = 1;
   matrik[0][1] = 3;
   matrik[0][2] = 4;
   matrik[1][0] = 6;
   matrik[1][1] = 7;
   matrik[1][2] = 8;
   matrik[2][0] = 0;
   matrik[2][1] = 2;
   matrik[2][2] = 2;

   // menampilkan elemen matrik
   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         cout << matrik[i][j] << " ";
      }
      cout << endl;
   }
	
	cout << "=======================================\n";
	cout << "NAMA\t: PRAMUDYA REYNALDI SALIM\n";
	cout << "NIM\t: 211011450389\n";
	cout << "KELAS\t: 02TPLE004\n";
	cout << "=======================================";

   return 0;
}
