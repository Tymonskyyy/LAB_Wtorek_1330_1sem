#include<iostream>
using namespace std;
void mnozenie(int a, int b) {
	int wynik;
	wynik = a * b;
	cout << "Wynik mnozenia to: ";
	cout << wynik;
}
void dzielenie(int a, int b) {
	float wynik;
	if (b == 0) {
		cout << "Nie dzielimy przez 0!";
	}
	if (a = 0) {
		cout << "Wynik dzielenia to: 0";
	}
	else {
		wynik = (float)a / b;
		cout << "Wynik dzielenia to: ";
		cout << wynik;
	}
}
void dodawanie(int a, int b) {
	int wynik;
	wynik = a + b;
	cout << "Wynik dodawania to: ";
	cout << wynik;
}
void odejmowanie(int a, int b) {
	int wynik;
	wynik = a - b;
	cout << "Wynik odejmowania to: ";
	cout << wynik;
}

int main() {
	int a = 0;
	int b = 0;
	char decyzja;
	float wynik;
	cout << "Podaj liczbê pierwsz: \n";
	cin >> a;
	cout << "Podaj liczbê drug¹: \n";
	cin >> b;
	cout << "Co chcesz zrobiæ: (+-dodawanie. - - odejmowanie itd \n";
	cin >> decyzja;
	if (decyzja == '+') {
		dodawanie(a, b);
	}
	if (decyzja == '-') {
		odejmowanie(a, b);
	}
	if (decyzja == '*') {
		mnozenie(a, b);

	}
	if (decyzja == '/') {
		dzielenie(a, b);
	}
	return 0;

}