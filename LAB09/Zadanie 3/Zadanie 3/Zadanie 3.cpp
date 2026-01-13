#include <iostream>
using namespace std;

struct trojkat {
	double a;
	double b;
	double c;
};

struct trojkat2 {
	double d;
	double e;
	double f;
};

void modyfikuj1_na_2(trojkat* trg, trojkat2* trg2) {
	(*trg2).d = (*trg).a;
	(*trg2).e = (*trg).b;
	(*trg2).f = (*trg).c;
}

void modyfikuj2_na_1(trojkat* trg, trojkat2* trg2) {
	(*trg).a = (*trg2).d;
	(*trg).b = (*trg2).e;
	(*trg).c = (*trg2).f;
}
int main() {
	trojkat trg;
	trg.a;
	trg.b;
	trg.c;
	trojkat2 trg2;
	(trg2).d;
	(trg2).e;
	(trg2).f;
	//pierwsza struktura
	cout << "Podaj wartosci trojkata 1:" << endl;
	cout << "Podaj a: ";
	cin >> trg.a;
	cout << "Podaj b: ";
	cin >> trg.b;
	cout << "Podaj c: ";
	cin >> trg.c;

	cout << "Trojkat 1: " << trg.a << ", " << trg.b << ", " << trg.c << endl;

	//druga struktura
	cout << "Podaj wartosci trojkata 2:" << endl;
	cout << "Podaj d: ";
	cin >> trg2.d;
	cout << "Podaj e: ";
	cin >> trg2.e;
	cout << "Podaj f: ";
	cin >> trg2.f;
	cout << "Trojkat 2: " << trg2.d << ", " << trg2.e << ", " << trg2.f << endl;


	cout << "Który na który chcesz zamienić?" << endl;
	int decyzja;
	cin >> decyzja;
	if (decyzja == 1) {
		cout << "Zamiana trojkata 1 na trojkat 2" << endl;
	
		cout << "Przed zamiana" << endl;
		cout << "a: " << trg.a << ", b: " << trg.b << ", c: " << trg.c << endl;
		cout << "a: " << trg2.d << ", b: " << trg2.e << ", c: " << trg2.f << endl;

		cout << "Zamiana wartosci:" << endl;

		modyfikuj1_na_2(&trg, &trg2);

		cout << "Po zamianienie" << endl;
		cout << "a: " << trg.a << ", b: " << trg.b << ", c: " << trg.c << endl;
		cout << "a: " << trg2.d << ", b: " << trg2.e << ", c: " << trg2.f << endl;

	}
	else {
		cout << "Zamiana trojkata 2 na trojkat 1" << endl;
		cout << "Przed zamiana" << endl;
		cout << "a: " << trg.a << ", b: " << trg.b << ", c: " << trg.c << endl;
		cout << "a: " << trg2.d << ", b: " << trg2.e << ", c: " << trg2.f << endl;

		modyfikuj2_na_1(&trg, &trg2);
		
		cout << "Zamiana wartosci:" << endl;
		cout << "Po zamianienie" << endl;
		cout << "a: " << trg.a << ", b: " << trg.b << ", c: " << trg.c << endl;
		cout << "a: " << trg2.d << ", b: " << trg2.e << ", c: " << trg2.f << endl;
	}
	cout << "Przed zamiana" << endl;
	cout << "a: " << trg.a << ", b: " << trg.b << ", c: " << trg.c << endl;
	cout << "a: " << trg2.d << ", b: " << trg2.e << ", c: " << trg2.f << endl;

	cout << "Zamiana wartosci:" << endl;
	cout << "Po zamianienie" << endl;
	cout << "a: " << trg.a << ", b: " << trg.b << ", c: " << trg.c << endl;
	cout << "a: " << trg2.d << ", b: " << trg2.e << ", c: " << trg2.f << endl;
	

	
}
