#include <iostream>
using namespace std;

int najwiekszyElement(int* tablica, int wielkosc) {
	int zmienna_pomocnicza = 0;
	for (int i = 0; i < wielkosc; i++) {
		if (tablica[i] > zmienna_pomocnicza) {
			zmienna_pomocnicza = tablica[i];
		}
	}
	return zmienna_pomocnicza;
}

int main() {
	int wielkosc;
	cout << "Podaj wielkosc tablicy: ";
	cin >> wielkosc;
	int* tablica = new int[wielkosc];
	for (int i = 0; i < wielkosc; i++) {
		cout << "Podaj element " << i + 1 << ": ";
		cin >> tablica[i];
	}
	najwiekszyElement(tablica, wielkosc);
	cout << "Najwiekszy element tablicy to: " << najwiekszyElement(tablica, wielkosc) << endl;
	return  0;
}