#include <iostream>
using namespace std;
int main() {
	int cyfra_user;

	for (int i = 0; i < 10; i++) {
		cout << "Podaj cyfre";
		cin >> cyfra_user;
		if (cyfra_user < 0) {
			cout << "Musi byæ dodatnia" << endl;
			return 7;
		}
		else{
			continue;
		}
	}
}
