#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int tab01[10]{};
	float suma = 0;
	int lowest = 0;
	int highest = 0;
	for (int i = 0; i < 10; i++) {
		int x = rand() % 10;
		tab01[i] = x;
		cout << tab01[i] << endl;
		suma += tab01[i];

		/*for (int i = 0; i < 10; i++) {
			if (tab01[i] < tab01[i + 1]) {
				lowest = tab01[i];

			}

		}
		for (int i = 0; i < 10; i++) {
			if (tab01[i] > tab01[i + 1]) {

				highest = tab01[i];

			}
			else if (highest > tab01[i + 1]) {
				break;
			}
		}*/;
		if (i == 0) {
			lowest = x;
			highest = x;
		}
		else {
			if (x < lowest) {
				lowest = x;
			}
			if (x > highest) {
				highest = x;
			}
		}
	}



		float srednia = suma / 10.0;
		cout << "Suma: " << suma << endl;
		cout << "Srednia: " << srednia << endl;
		cout << "The lowest is: " << lowest << endl;
		cout << "The highest is: " << highest << endl;

	}


