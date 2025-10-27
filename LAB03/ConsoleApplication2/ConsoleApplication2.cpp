#include<iostream>
using namespace std;
int main() {
	int prime = true;
	while (prime == true) {
		int a;
		int b;
		char decyzja;
		float wynik;
		char koniec;
		cout << "\nczy chcesz zakończyć (t/n)";
		cin >> koniec;
		if (koniec == 't'){
			prime = false;
				break;
		}			
		cout << "Podaj liczbê pierwsz¹: \n";
		cin >> a;
		cout << "Podaj liczbê drug¹: \n";
		cin >> b;
		cout << "Co chcesz zrobiæ: (+-dodawanie. - - odejmowanie itd \n";
		cin >> decyzja;
		if (decyzja == '+') {
			wynik = a + b;
			cout << "wynik to:\n ";
			cout << wynik, "\n";

		}
		if (decyzja == '-') {
			wynik = a - b;
			cout << "wynik to:\n";
			cout << wynik, "\n";

		}
		if (decyzja == '*') {
			wynik = a * b;
			cout << "wynik to: \n";
			cout << wynik,"\n";
		}
		if (decyzja == '/') {
			if (b == 0) {
				cout << "Nie dzielimy przez 0!\n";
			}
			else {
				wynik = (float)a / b;
				cout << "wynik to:\n ";
				cout << wynik,"\n";
			}
		}
	}
}