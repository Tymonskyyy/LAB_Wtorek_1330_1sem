#include <iostream>
using namespace std;
int liczba_1 = 0;
int liczba_2 = 0;

int  suma_liczb(int liczba_1, int liczba_2, int ilosc_liczb) {
	int suma = 0;
	for (int i = 0; i<ilosc_liczb; i++) {
		cout << "Podaj liczbe calkowita: ";
		cin >> liczba_1;
		suma += liczba_1;
	}
	return suma;
}

int main() {
	cout << "Program do liczenia liczb calkowitych" << endl;
	cout << "Podaj ilość liczb do sumowania";
	int ilosc_liczb;
	cin >> ilosc_liczb;
	cout << "Git" << endl;
	int wynik = suma_liczb(liczba_1, liczba_2, ilosc_liczb);
	cout << "Suma podanych liczb to: " << wynik << endl;
	return 0;

}
/*int main() {
	int liczba_uzytkownika;
	cout << "Podaj liczbe calkowita: ";
	cin >> liczba_uzytkownika;
	int druga_liczba;
	cout << "Podaj druga liczbe calkowita: ";
	cin >> druga_liczba;
	int suma = liczba_uzytkownika + druga_liczba;
	cout << "Suma podanych liczb to: " << suma << endl;
	return 0;

}*/