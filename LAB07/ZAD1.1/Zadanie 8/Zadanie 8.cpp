#include <iostream>
using namespace std;
int silnia(int liczba_1) {
	int wynik = 0;
	for (int i = 1; i <= liczba_1; i++) {
		if (i == 1) {
			wynik = 1;
		} else {
			wynik = wynik * i;
		}
	}
	return wynik;
}
int main() {
	cout << "Program do liczenia silni liczby calkowitej dodatniej." << endl;
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	silnia(liczba);
	cout << "Silnia liczby " << liczba << " wynosi: " << silnia(liczba) << endl;
	return 0;
}