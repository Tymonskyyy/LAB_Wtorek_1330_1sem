#include <iostream>
using namespace std;
int globalna_a = 20;
int globalna_b = 10;

static int suma() {
	int suma = globalna_a + globalna_b;

	return globalna_a;
	return globalna_b;

}
int main() {
	suma();
	int a = 1;
	int b = 2;
	suma(a, b);
}