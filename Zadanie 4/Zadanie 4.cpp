#include <iostream>
using namespace std;    
int dzilalnie(int a, int b, int i) {
	int wynik = 1;
    if (b == 0) {
        return 1;
	}   
    for  (int i = 0; i < b; i++) {
        int wynik = a*b;
	}
	return wynik;


}
int main()
{
	cout << "Program do potęgowania" << endl;
    int a = 0;
	int b = 0;

	int i = 0;

    cout << "Podaj podstawe: ";
    cin >> a;
    cout << "Podaj wykladnik: ";
    cin >> b;
    int oblicz =  dzilalnie(a,b,i);
	cout << "Wynik to: " << oblicz << endl;

	return 0;


}

