#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	//1.1 построить ёлочку из звёзд;
	cout << "___________" << endl;
	cout << "____ * ____" << endl;
	cout << "____***____" << endl;
	cout << "___*****___" << endl;
	cout << "__*******__" << endl;
	cout << "____| |____" << endl;
	cout << "____|_|____" << endl;
	//1.2 вывести сумму двух чисел 
	int a, b,c;
	cout << "ведите два числа"<<endl;
	cin >> a >> b;
	cout << a + b<<endl;

	////2.1 пользователь вводит два числа нужно вывести на экран сумму чисел.
	int d1, n1;
	cout << "введите числа"<<endl;
	cin >> d1 >> n1;
	cout << d1 + n1<<endl;
	
	////2.2 пользователь вводит два числа нужно вывести на экран разность чисел
	int z, x;
	cout << "Введите числа" << endl;
	cin >> z >> x;
	cout << z - x<<endl;
	
	////2.3 пользователь вводит два числа нужно вывести на экран произведение чисел.
	int l, k;
	cout << "Введите два числа" << endl;
	cin >> l >> k;
	cout << l * k<<endl;

	//3.1 дано 3 числа вывести большее 
	int j, n, m;
	cin >> j >> n >> m;
	if (j > n && j > m) cout << j;
	else if (j<n && n>m) cout << n;
	else cout << m<<endl;
	//3.2 дано 3 числа вывести меньшее
	int q, s, v;
	cin >> q >> s >> v;
	if (q < s && q < v) cout << q;
	else if (s<q && s<v) cout << s;
	else cout << v<<endl;
	//3.3 определить является ли число чётным
	int w;
	cout << ("Введите число");
	cin >> w;
	if (w % 2 == 0)
		cout << "чёт" << endl;
	else
		cout << "Нечёт" << endl;

	//5.1 пользователь вводит число нужно проверить оно больше 10 или меньше 
	int o;
	cout << "введите значение переменной o" << endl;
	cin >> o;
	o < 10 ? cout << "o меньше 10" << endl : cout << "o больше 10" << endl;

	//6.1 пользователь вводить цифру нужно вывести цифру буквами
	int h;
	cin >> h;
	cout << "input digit" << endl;
	switch (h) {
	case 0:
		cout << "zero";
		break;
	case 1:
		cout << "one";
		break;
	case 2:
		cout << "two";
		break;
	case 3:
		cout << "three";
		break;
	case 4:
		cout << "four";
		break;
	case 5:
		cout << "five";
		break;
	case 6:
		cout << "six";
		break;
	case 7:
		cout << "seven";
		break;
	case 8:
		cout << "eight";
		break;
	case 9:
		cout << "nine";
		break;
	default:
		cout << "incorrect digit";
		break;

	}

}