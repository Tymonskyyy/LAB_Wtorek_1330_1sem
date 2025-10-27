#include <iostream>

using namespace std;
int main() {
	int fahr, celsius;
	int start, limit, step;

	start = 0;    // pocz¹tkowa temperatura w skali Fahrenheita
	limit = 200; // przypis 200 do zmiennej limit
	step = 20;   // krok co 20 stopni
	while (fahr <= limit) {
		
		float celsius = (5.0 / 9.0) * (fahr - 32);
		cout << fahr << "\t" << celsius << endl;

	}
}