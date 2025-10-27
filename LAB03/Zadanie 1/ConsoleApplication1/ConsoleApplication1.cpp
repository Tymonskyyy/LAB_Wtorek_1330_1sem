#include <iostream>
using namespace std;
int main() {

	int a;
	int b;
	cout << "Podaj liczbê: \n";
	cin >> a;
	cout << "Podaj drug¹: \n";
	cin >> b;
	if (a == b) {
		cout << "Obie s¹ równe";
	}
	if (a<b) {
		cout << "Pierwsza jest mniejsza od drugiej";
	}
	if (a>b) {
		cout << "Pierwsza jest wiêksza od drugiej";
	}
	return 0;

}