#include <iostream>
using namespace std;

struct prostokat {
	int dlugosc_bok_a ;
	int dlugosc_bok_b ;
};
int pole (int dlugosc_bok_a, int dlugosc_bok_b) {
	return dlugosc_bok_a * dlugosc_bok_b;
}

int main() {
	
	int dlugosc_bok_a;
	int dlugosc_bok_b;

	cout << "Podaj dlugosc boku a prostokata: " << endl;
	cin >> dlugosc_bok_a;

	cout << "Podaj dlugosc boku b prostokata: " << endl;
	cin >> dlugosc_bok_b;
	prostokat;
	pole(dlugosc_bok_a, dlugosc_bok_b);
	cout << "Pole prostokata o bokach " << dlugosc_bok_a	<< " Oraz boku: " << dlugosc_bok_b << " wynosi: " << endl << pole(dlugosc_bok_a, dlugosc_bok_b) << endl;
}