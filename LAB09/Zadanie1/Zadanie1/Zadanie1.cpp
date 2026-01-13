#include <iostream>
using namespace std;

struct Point {
	int x = 8;
	int y = 9;
};
int main() {
	cout << Point().x << "" << endl;
	cout << Point().y << endl;
}