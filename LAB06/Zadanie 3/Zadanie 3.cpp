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
	double zapisana = 0;
	cout << "Program do przeliczania temperatur Celsjusza na Kelwiny i zapisywania ich." << endl;
	cout << "Podaj temperature w Celsjuszach: ";
	cin >> zapisana;
	przelicz(zapisana);
	zapisz(zapisana);
	wyswietl(zapisana);
	return 0;
}