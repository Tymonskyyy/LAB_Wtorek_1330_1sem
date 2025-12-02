#include <iostream>
using namespace std;

int potegi( int liczba, int liczba_potegi) {
	int potega = liczba_potegi;
	for (int i = 1; i < liczba_potegi; i++) {
		potega = potega * liczba;
	}
	return potega;

}
int main() {
	int liczba = 0 ;
	int liczba_potegi = 0;
	cout << " Program do liczenia poteg" << endl;
	cout << " Podaj liczbe calkowita: ";
	cin >> liczba;
	cout << "Podaj liczbe do ktorej chcesz obliczyc potegi: ";
	cin >> liczba_potegi;
	potegi(liczba, liczba_potegi);
	cout << " Potega liczby " << liczba << " wynosi: " << potegi(liczba,liczba_potegi) << endl;
}