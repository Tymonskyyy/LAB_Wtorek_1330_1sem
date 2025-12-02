#include <iostream>
#include <algorithm>
using namespace std;
string odwroc (string slowo) {
	int n = slowo.length();
	string odwrocone = slowo;
	for (int i = 0; i < n / 2; i++) {
		swap(odwrocone[i], odwrocone[n - i - 1]);
	}
	if (slowo == odwrocone) {
		cout << "Podane słowo jest polindromem." << endl;
	}
	else {
		cout << "Podane słowo nie jest polindromem." << endl;
	}
	return odwrocone;
}
int main() {
	cout << "Program do sprawdzania czy dane słowa są polindromami." << endl;
	string slowo;
	cout << "Podaj słowo: ";
	cin >> slowo;
	odwroc(slowo);
	return 0;


}