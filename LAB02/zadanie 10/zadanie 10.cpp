
#include <iostream>
using namespace std;
int main()
{
	int ilo��{};
	int n;
	cout << "Podaj liczb�: \n ";
	cin >> n;
	for (int i = 0; i < 100; i++) {
		if (i % n == 0){
			ilo��++;
		}
	}
	cout << "Liczba liczb podzielnych przez " << n << " w przedziale od 0 do 100 wynosi: " << ilo�� << endl;
}
