#include <iostream>
using namespace std;
int main()
{//1
	setlocale(LC_ALL, "RU");
	char a;
	cin >> a;
	if (a >= '0' && a <= '9') {
		cout << "цыфра";
	}
	else if (a >= 'A' && a <= 'Z') {
		cout << "буква";
	}
	else if (a >= 'a' && a <= 'z') {
		cout << "буква";
	}
	else if ((a == '.') or (a == '!') or (a == '?') or (a == ',')) {
		cout << "знак препинания";
	}


//3
	int doh, op, st;
	cout << "введите доход и количество опозданий" << endl;
	cin >> doh >> op;
	st = (doh / 50) * 100;
	cout << st;

	cout << "введите количество строк и зарплату" << endl;
	cin >> st >> doh;
	op = doh / 20;
	cout << op<< "количество опозданий";
	cout << "введите количество строк и опозданий" << endl;
	cin >> st >> op;
	doh = (st / 50) * 100;
	op = op / 3;
	doh = doh / op;
	if (doh > 0) {
		cout << "вася получит:" << doh;
	}
	else (cout << "васе не заплатят");
	
}