#include <iostream>
using namespace std;
int main() {
	int tablica[10];
	int* wsk;
	wsk = tablica;
	for (int i = 0; i < 10; i++) {
		wsk[i] = 9;
	}
	//wyświetalnie tablicy
	for (int z = 0; z < 10; z++) {
		cout << tablica[z] << " ";
	}
}