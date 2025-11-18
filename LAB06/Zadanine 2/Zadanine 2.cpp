#include <iostream>
using namespace std;
int rozmiar = 10;
static void wypelnij(int tab[], int rozmiar) {
	for (int i = 0; i < rozmiar; i++) {
		cout << "Wprowadź dane:" << endl;
		cin >> tab[i];
	}
}
static void usun(int tab[], int rozmiar) {


	cout << "Usuwanie danych z tablicy" << endl;
	cout << "Wybierz indeks do usunięcia (0-9):" << endl;
	int indeks;
	cin >> indeks;

	for (int i = indeks; i <  rozmiar - 1; i++) {
		tab[i] = tab[i + 1];

		
	}
	rozmiar--;

}
static void wyswietl(int tab[], int rozmiar) {
	cout << "Zawartość tablicy:" << endl;
	for (int i = 0; i < rozmiar; i++) {
		cout << tab[i] << " ";
	}
	cout << endl;
}

int main() {
	int tab[10];
	cout << "Wypełnianie tablicy:" << endl;
	wypelnij(tab, rozmiar);
	cout << "Zawartość tablicy przed usunięciem elementu:" << endl;
	wyswietl(tab, rozmiar);
	usun(tab, rozmiar);
	cout << "Po usunięciu elementu:" << endl;
	wyswietl(tab, rozmiar - 1);

}