#include <iostream>
using namespace std;
int main() {
	int tablica[10];
	int i = 0;
	
	int prime = 1;
	while (prime == 1) {
		cout << "Wybierz opcje: " << endl;
		cout << "1. Wprowadz liczby do tablicy" << endl;
		cout << "2. Wyswietl liczby z tablicy" << endl;
		cout << "3. Zakończ" << endl;
		int wybor;
		int i = 0;
		int x = 0;
		int liczba = 0;
		cin >> wybor;
		switch (wybor) {
		case 1:
			cout << "Wprowadzanie liczby";
			cout << "----------------" << endl;
			cout << "Podaj liczbę: \n" << endl;
			cin >> liczba;

			break;
		case 2:
			for (int i = 0; i < 10; i++) {
				cout << tablica[i] << " ";
			}
			break;

		case 3:
			if (i < 10) {
				for (i; i > 10; i++) {
					tablica[i] = 0;
				}
			}
			cout << "Twoja tablica :" << endl;
			for (i = 0; i < 10; i++) {
				cout << tablica[i] << " ";
			}
			prime = 0;
		}
	}
}

	
	