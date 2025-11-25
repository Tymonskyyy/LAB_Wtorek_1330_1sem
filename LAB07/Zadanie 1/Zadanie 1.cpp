#include <iostream>
using namespace std;
int choinka(int x, int h) {
	if (x == 0) {
		for (int z = 0; z < h; z++) {
			cout << " ";
		}
		cout << "*" << endl;
		return 0;
	}
	else{ 
		choinka(x - 1, h);

		for (int j = 0; j < h - x; j++) {
			cout << " ";
		}
		for (int i = 0; i <= (2 * x); i++) {
			cout << "*";
		}
		cout << endl;


	}
}
//x = ,,wysokokść choinki''
int main() {
	int n;
	cout << "Podaj wysokość choinki ";
	cin >> n;
	choinka(n, n);
	cout << "";
	return 0;
}