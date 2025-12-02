#include <iostream>
using namespace std;
/*Program do tworzenia choinki składającej się z 3 segmentów na n wysokość*/
/*x - długość gałężi h - wysokość, y - ilość segmentów*/
int choinka(int x, int h, int y) {
	if (x == 0) {
		for (int z = 0; z < h; z++) {
			cout << " ";
		}
		cout << "*" << endl;
		return 0;
	}
	else {
		choinka(x - 1, h, y);
		for (int j = 0; j < h - x; j++) {
			cout << " ";
			for (int i = 0; i <= (2 * x); i++) {
				cout << "*";
			}
			//for (int r = 3; r > 0; r--) {
				//cout << "*";
			//}

		//}
		//cout << endl;
		/*for (int x; x < y; x++) {
			for (int h; h > 0; h++) {
				for (int y = 0; y > h; y++) {
					cout << "*";
					cout << "";
				}
			}
		}*/
		}
	}
}


int main(){
	int n;
	cout << "Podaj wysokosc choinki: ";
	cin >> n;
	choinka(n,n,n);
	return 0;
}