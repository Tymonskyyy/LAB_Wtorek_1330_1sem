#include <iostream>
using namespace std;
int main() {
	cout << "Program do sprawdzania wspolczynnika r w odpowiedzi" << endl;
	float r;
	cout << "Podaj wartosc wspolczynnika r: ";
	cin >> r;
	int prime = true;
	while (prime == true){
		if (r < 0.7 && r >= 1) {
			cout << "Bardzo silna korelacja dodatnia" << endl;
			prime = false;
		}
		if (r >= 0.5) {
			cout << "Silna korelacja dodatnia" << endl;
			prime = false;
		}
		if (r < 0.3) {
			cout << "Umiarkowana korelacja dodatnie" << endl;
			prime = false;
		}
		if (r < 0.2) {
			cout << "S³aba korelacja dodatnia" << endl;
			prime = false;
		}
		if (r = 0) {
			cout << "Brak korelacji" << endl;
			prime = false;
		}

	}
}