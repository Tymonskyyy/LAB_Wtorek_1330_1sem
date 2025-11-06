#include <iostream>
using namespace std;
int main() {
	int wiersze = 0; //
	int kolumny = 0;
	int i = 0;
	int x = 0;
	cout << "Podaj ilość wierszy: " << endl;
	cin >> wiersze;
	cout << "Podaj ilość kolumn: " << endl;
	cin >> kolumny;
	int** tablice = new int* [wiersze];
	for (i = 0; i < wiersze; i++) {
		tablice[i] = new int[kolumny];
	}
	cout << "Podaj elementy tablicy: " << endl;
	for (i = 0; i < wiersze; i++) {
		for (x = 0; x < kolumny; x++) {
			cout << "Element [" << i << "][" << x << "]: ";
			cin >> tablice[i][x];
		}
	}
	cout << "Tablica: " << endl;
	for (i = 0; i < wiersze; i++) {
		for (x = 0; x < kolumny; x++) {
			cout << tablice[i][x] << " ";
		}
		cout << endl;
	}
}