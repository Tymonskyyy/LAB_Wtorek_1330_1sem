#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool czy_palindrom(string slowo) {
	if (slowo == string(slowo.rbegin(), slowo.rend())) {
		return true;
	}
	if (slowo != string(slowo.rbegin(), slowo.rend())) {
		return false;
	}
}
int main() {
	cout << "Program do sprawdzania słow palindromicznych." << endl;
	string slowo;
	cout << " Podaj słowo: ";
	cin >> slowo;
	bool palindrom = true;
	czy_palindrom(slowo);
	if (true) {
		cout << "TAK jest palindromem." << endl;
	}
	if (false){
		cout << "NIE nie jest palindromem." << endl;

	return 0;
	}
}