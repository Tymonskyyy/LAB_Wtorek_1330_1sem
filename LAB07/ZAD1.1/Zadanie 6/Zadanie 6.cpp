#include <iostream>
using namespace std;

int ciag(int n) {
    int a = 0; 
    int b = 1; 
    int wynik = b; 


    for (int i = 2; i <= n; i++) {
        wynik = a + b;
        a = b;   
        b = wynik;
    }
    return wynik;

}
int main() {
	int n;
	int prime = 1;
	cout << " Podaj liczbe calkowita n: ";
	cin >> n;
	ciag(n);
	cout << " Wartosc ciagu dla n = " << n << " wynosi: " << ciag(n) << endl;

}