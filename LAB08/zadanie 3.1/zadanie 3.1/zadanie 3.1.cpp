#include <iostream> 
using namespace std;

int main() {
	int rozmiar_tab = 0;
	cout << "Podaj rozmiar tablicy: " << endl;
	cin >> rozmiar_tab;
	float tablica[rozmiar_tab];
	tablica = new float tablica[rozmiar_tab];
	for (int i = 0; i < rozmiar_tab; i++) {
		tablica[i] = i;
	}

	for (int z = 0; z < rozmiar_tab; z++) {
		cout << tablica[z] << " ";
	}


}