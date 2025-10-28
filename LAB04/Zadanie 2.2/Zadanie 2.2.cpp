#include <iostream>
using namespace std;
int fun1(int a)
{
	cin >> a;
	if (a < 0) {
		cout << "Musi być dodatnia \n";
	}
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			cout << i << " ";
		}
	}
	
	return 0;
}
int main(){
	int a =0;
	int i = 0;
	cout << "Podaj liczbe: \n";
	fun1(a);
	return 0;
}

