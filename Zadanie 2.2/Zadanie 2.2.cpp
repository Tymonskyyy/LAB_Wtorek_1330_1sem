#include <iostream>
using namespace std;
int fun1(int a)
{
	cin >> a;
	if (a < 0) {
		cout << "Musi być dodatnia \n";
	}
	if (a % 2 == 0) {
		cout << "Dzielnik" << endl;
	}
	else {
		cout << "Niedzielnik" << endl;

	}
	
	return 0;
}
int main()
{
	int a =0;
	cout << "Podaj liczbe: \n";
	fun1(a);
	return 0;
}

