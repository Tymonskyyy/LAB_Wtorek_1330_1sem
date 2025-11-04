#include <iostream>

using namespace std;


int main() {
	int n = 10;
	int* tablica = new int[n];
	cout << "Podaj 10 liczb calkowitych: " << endl;
	for (int i = 0; i < n; i++) {

		cin >> tablica[n];
	}
	cout << "Podane liczby to: " << endl;
	cout << tablica[n] << endl;

}