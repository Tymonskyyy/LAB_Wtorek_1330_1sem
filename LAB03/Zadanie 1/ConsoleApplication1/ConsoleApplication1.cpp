#include <iostream>
using namespace std;
int main() {

	int a;
	int b;
	cout << "Podaj liczb�: \n";
	cin >> a;
	cout << "Podaj drug�: \n";
	cin >> b;
	if (a == b) {
		cout << "Obie s� r�wne";
	}
	if (a<b) {
		cout << "Pierwsza jest mniejsza od drugiej";
	}
	if (a>b) {
		cout << "Pierwsza jest wi�ksza od drugiej";
	}
	return 0;

}