#include <iostream>

using namespace std;
int main() {
	int fahr, celsius;
	int start, limit, step;

	start = 0;    // pocz¹tkowa temperatura w skali Fahrenheita
	limit = 200; // przypis 200 do zmiennej limit
	step = 20;   // krok co 20 stopni
	for (fahr = 0; fahr <= limit; fahr = fahr + step)
	{
		float celsius = (5 / 9) * (fahr - 32.0);
		cout << "f%3.0f %6.1 f \n", fahr, celsius;
	}
}