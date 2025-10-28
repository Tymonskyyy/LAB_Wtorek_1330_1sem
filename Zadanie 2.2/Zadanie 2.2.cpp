#include <iosstream>
using namespace std;
int fun1(int a)
{
	cin >> a;
	return a;

}
int main()
{
	int a;
	cout << "Podaj liczbe: \n";
	fun1(a);
	cout << "Podales liczbe: " << a << endl;
	return 0;
}

