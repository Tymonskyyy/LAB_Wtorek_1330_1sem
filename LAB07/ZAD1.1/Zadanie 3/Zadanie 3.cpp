#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string odwroc(string wyraz) {
	int n = wyraz.length();
	string odwrocony_wyraz;
	for (int i = 0; i < n / 2; i++) {
		swap(wyraz[i], wyraz[n - i - 1]);
	}
	return wyraz;
}
int main() {
	cout << "Odrwacam liczbe" << endl;
	string wyraz;
	cout << "Podaj wyraz: ";
	cin >> wyraz;


	wyraz = odwroc(wyraz);
	cout << "Odwrocony wyraz to: " << wyraz << endl;
	return 0;

}