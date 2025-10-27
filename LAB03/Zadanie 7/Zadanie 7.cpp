#include <iostream>
using namespace std;

int main()
{
	cout << "Podaj";
	int prime = true;
	while (prime == true) {
		for (int i = 0; i <= 200; i++) {
			if (i % 2 != 0) {
				cout << i;
				cout << "Nastêpna \n";
			}
			else {
				prime = false;

			}
		}
	}
}


