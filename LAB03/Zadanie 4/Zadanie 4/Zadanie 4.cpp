#include<iostream>
using namespace std;
int main() {
	int a;
	int b;
	char decyzja;
	float wynik;
	cout << "Podaj liczb� pierwsz�: \n";
	cin >> a;
	cout << "Podaj liczb� drug�: \n";
	cin >> b;
	cout << "Co chcesz zrobi�: (+-dodawanie. - - odejmowanie itd \n";
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
		wynik = a * b;
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
}