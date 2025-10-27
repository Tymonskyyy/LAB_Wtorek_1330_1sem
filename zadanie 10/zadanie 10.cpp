
#include <iostream>
using namespace std;
int main()
{
	int iloœæ{};
	int n;
	cout << "Podaj liczbê: \n ";
	cin >> n;
	for (int i = 0; i < 100; i++) {
		if (i % n == 0){
			iloœæ++;
		}
	}
	cout << "Liczba liczb podzielnych przez " << n << " w przedziale od 0 do 100 wynosi: " << iloœæ << endl;
}
