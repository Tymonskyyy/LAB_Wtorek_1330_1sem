#include <iostream>
using namespace std;

int main() {
	float r;
	cout <<  "Podaj wp�czynnik r: \n";
	cin >> r;
	if (r <= 0.7 && r <= 1) {
		cout << "Bardzo silna korelacja dodatnia";
	}
		if (r <= 0.5) {
		cout << "Silna korelacja dodatnia";
		}
		if (r >= 0.3) {
		cout << "umiarkowana korelacja dodatnia";
	}
	if (r >= 0.2) {
		cout << "s�aba korelacja dodatnia ";
	}
	if (r >= 0) {
		cout << " Brak korelacji";

	}
}