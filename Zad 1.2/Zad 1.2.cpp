#include <iostream>
using namespace std;
int fun1(int a, int b)
{
	if (a > b)
		cout << "Liczba wieksza to: " << a << endl;
	else
		cout << "Liczba wieksza to: " << b << endl;
	return 0;
}
int fun2(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
	return 0;
}
int main()
{
	int a;
	int b;
	cout << "Podaj liczbe 1: \n";
	cin >> a;
	cout << "Podaj liczbe 2: \n";
	cin >> b;

	fun1(a, b);
	fun2(a, b);
	return 0;

}
