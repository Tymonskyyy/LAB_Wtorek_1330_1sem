#include <iostream>
using namespace std;
int choinka(int x, int h, int r) { //x - liczba poziomów choinki, h - wysokość choinki, r - liczba segmentów
		if (x == 0) {
			for (int z = 0; z < h; z++) {
				cout << " ";
			}
			cout << "*" << endl;
			return 0;
		}
		else {
			choinka(x - 1, h,r);

			for (int j = 0; j < h - x; j++) {
				cout << " ";
				for (int i = 0; i <= (2 * x); i++) {
					cout << "*";
				}
				for (int r = 3; r > 0; r--) {
					cout << "*";
					cout << endl;
				}
			}
			cout << endl;


		}
	}

//x = ,,wysokokść choinki''
int main() {
	int n;
	cout << "Program do rysowania choinki z gwiazdek" << endl;
	cout << "Podaj wysokość choinki ";
	cin >> n;
	choinka(n, n,n);
	cout << "";
	return 0;
}