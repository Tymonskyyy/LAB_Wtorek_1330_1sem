#include <iostream>
using namespace std;
void silnia(int n) {
	long long wynik = 1;
	for (int i = 1; i <= n; i++) {
		wynik *= i;
	}
	cout << "Silnia z " << n << " wynosi: " << wynik << endl;
	return wynik;
}
int main()
{
	cout << "Program do obliczania silni" << endl;
	int n = 0;
	cout << "Podaj liczbe calkowita nieujemna: ";
	cin >> n;
	if (n < 0) {
		cout << "Silnia jest zdefiniowana tylko dla liczb calkowitych nieujemnych." << endl;
	} else {
		silnia(n);
	}
	return 0;
}
