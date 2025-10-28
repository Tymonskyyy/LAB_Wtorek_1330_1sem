#include<iostream>
using namespace std;
int mnnozenie(int a, int b) {
	return a * b;
}
int main() {
	int a;
	int b;
	char decyzja;
	float wynik;
	cout << "Podaj liczbê pierwsz¹: \n";
	cin >> a;
	cout << "Podaj liczbê drug¹: \n";
	cin >> b;
	cout << "Co chcesz zrobiæ: (+-dodawanie. - - odejmowanie itd \n";
	cin >> decyzja;
	if (decyzja == '+') {
		wynik = a + b;
		cout << "wynik to: ";
		cout << wynik;
	}
	if (decyzja == '-') {
		wynik = a - b;
		cout << "wynik to: ";
		cout << wynik;

	}
	if (decyzja == '*') {
		mnnozenie(a, b);
		wynik = mnnozenie(a, b);
		cout << "wynik to: ";
		cout << wynik;

	}
	if (decyzja == '/') {
		if (b == 0) {
			cout << "Nie dzielimy przez 0!";
		}
		else {
			wynik = (float)a / b;
			cout << "wynik to: ";
			cout << wynik;
		}
	}