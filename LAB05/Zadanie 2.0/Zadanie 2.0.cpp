#include <iostream>
using namespace std;

int main() {
	cout << "Podaj dlugosc tablic: \n";
	int n;
	cin >> n;
	int* tab = new int [n] ;
	tab[0] = 0;
	tab[1] = 1;
	for (int i = 2; i < n; i++) {

		tab[i] = tab[i-1] + tab[i-2];
		

	}
	for (int i = 0; i < n; i++) {
		cout << tab[i] << " ";
	}
}