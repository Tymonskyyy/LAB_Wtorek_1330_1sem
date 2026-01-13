#include <iostream>
using namespace std;
int main() {
	int jakastablica[10];
	int* wsk;
	wsk = jakastablica;
	wsk = &jakastablica[0];
	wsk++;
	(*wsk)++;
	
	//wyświetlanie tablicy
	for (int i = 0; i < 10; i++) {
		cout << jakastablica[i] << " ";
	}
	
	//zamiana rekordu 7 na 77

	*(wsk + 5) = 77;
	cout << "Wykonano zadanie polegające na zamianie. " << endl;

	//wyświetlanie tablicy
	for (int z = 0; z < 10; z++) {
		cout << jakastablica[z] << " ";

	}
}