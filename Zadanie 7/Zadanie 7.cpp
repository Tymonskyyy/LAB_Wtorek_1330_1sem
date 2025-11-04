#include <iostream>
using namespace std;

lucky_number(int number) {
	int sum = 0;
	while (number > 0) {
		sum += number % 10;
		number /= 10;
	}
	return sum;
}
int main()
{
	cout << "Program do obliczania szczesliwej liczby" << endl;
	int number = 0;
	cout << "Podaj liczbe: ";
	cin >> number;
	int result = lucky_number(number);
	cout << "Szczesliwa liczba to: " << result << endl;
	return 0;