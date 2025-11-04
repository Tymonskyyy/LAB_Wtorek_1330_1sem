#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int tab01[10]{};
	int suma1 = 1 ;
	int suma = 1;
	for (int i = 0; i < 10; i++) {
		int x = rand() % 10;
		tab01[i] = x;
		cout << tab01[i] << endl;
		int suma1 = suma + tab01[i];

	}
	float srednia = suma1 / 10.0;
	cout << "Suma: " << suma << endl;
	cout << "Srednia: " << srednia << endl;
}

