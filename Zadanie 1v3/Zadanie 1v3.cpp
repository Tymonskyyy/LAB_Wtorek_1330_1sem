#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout << "Podaj liczbe 1: \n";
	cin >> a;
	cout << "Podaj liczbe 2: \n";
	cin >> b;
	int funckcja1(a, b);
	{
		if (a < b)
			cout << "Liczba mniejsza to: " << a << endl;
		else
			cout << "Liczba mniejsza to: " << b << endl;

	}
	int funkcja2(a, b)
	{
		if (a > b)
			return a;
		else
			return b;
	}
	funcja1();
	funckcja2();
	return 0;

}