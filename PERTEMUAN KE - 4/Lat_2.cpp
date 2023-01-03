#include <iostream>
using namespace std;

int main () {
	
	cout << "=============================\n";
	cout << "\t LOOPING 2 \n";
	cout << "=============================\n";
	
	for (int i = 0; i < 10; i++) {
		if (i == 4) continue;
		cout << "Bilangan : " << i << endl;
		
		if (i == 6) break;  
	}
}