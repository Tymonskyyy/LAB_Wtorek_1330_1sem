#include <iostream>
using namespace std;

double Temp1[10];
float temp2[10];
int index= 0;
static double przelicz(double zapisana) {
	double wynik = zapisana + 273.15;
	cout << "Wynik to: " << wynik << "K" << endl;
	return wynik;
}

static float zapisz(double zapisana) {
	double wynik = przelicz(zapisana);

	cout << "Trwa zapisywanie temperatury..." << endl;
	for (int i = 0; i < index; i++) {
		if (index < 10) {
			Temp1[index] = zapisana;
			temp2[index] = wynik;
			index++;
			cout << "Temperatura zostala zapisana." << endl;
			return 0;
		}
	}
	return 0;
}
static float wyswietl(double zapisaana) {
	cout << "Zapisane temperatury: " << endl;
	for (int i = 0; i < index; i++) {
		cout << Temp1[i] << "C = " << temp2[i] << "K" << endl;
	}
	return 0;

}
int main() {
		int decyzja = 0;
		double zapisana = 0;
		cout << "Program do przeliczania temperatur Celsjusza na Kelwiny." << endl;
		cout << "Mozesz zapisac maksymalnie 10 temperatur." << endl;
		cout << "-----------------------------------------------" << endl;
		cout << "Menu: " << endl;
		cout << "1. Przelicz temperature Celsjusza na Kelwiny." << endl;
		cout << "2. Zapisz temperature." << endl;
		cout << "3. Wyswietl zapisane temperatury." << endl;
		cout << "Podaj decyzje: " << endl;
		cin >> decyzja;
		if (decyzja < 1 || decyzja > 3) {
			cout << "Nieprawidlowa decyzja. Program zakonczony." << endl;
			return 0;
		}
		if (index >= 10) {
			cout << "Osiagnieto maksymalna liczbe zapisanych temperatur. Program zakonczony." << endl;
			return 0;
		}
		if (decyzja == 1) {
			cout << "Podaj temperature do przeliczenia: " << endl;
			cin >> zapisana;
			przelicz(zapisana);
		}
		if (decyzja == 2) {
			zapisz(zapisana);
		}
		if (decyzja == 3) {
			wyswietl(zapisana);
		}
		return 0;
	
}