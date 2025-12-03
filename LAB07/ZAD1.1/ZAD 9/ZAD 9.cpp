#include <iostream>

using namespace std;
int mnozenie_naturalnej(int liczba) {
	int wynik = 0;
	for (int i = 0; i < liczba; i++) {
		wynik = wynik + i;

	}
	return wynik;
}

int main() {
	int liczba = 0;
	cout << "Podaj liczbe naturalna: ";
	cin >> liczba;
	if (liczba < 0) {
		cout << "to nie jest liczba naturalna" << endl;
	}
	mnozenie_naturalnej(liczba);
	cout << "Wynik mnozenia to: " << mnozenie_naturalnej(liczba) << endl;


}