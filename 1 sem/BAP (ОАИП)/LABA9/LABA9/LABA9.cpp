#include <iostream>

using namespace std;

double function(double x) {
	return pow(x, 3) + (3 * x) - 1;
}

double function1(double x) {
	return pow(x, 3) + x - 3;
}

double function2(double x) {
	return sin(x) + 2 + x;
}

double function3(double x) {
	return pow(x, 2) + 4*x - 2;
}

double function4(double x) {
	return (pow(x, 3) + 2 * x - 4);
}

int main() {
	setlocale(LC_ALL, "ru");

	//Задание 5
	// Часть 1
	/*float a = 5, b = 11, s = 0, h, x;
	const int n = 200;
	x = a;
	h = (b - a) / n;
	do{
		s += h * ((exp(x) + 2) + (exp(x + h) + 2))/ 2;
		x += h;
	} while (x < b - h);
	cout << s;*/

	// Часть 2
	/*float a = 5, b = 11, s1 = 0, s2 = 0, s = 0, h, i=1, x;
	const int n = 200;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	do{
		s2 += exp(x) + 2;
		x += h;
		s1 += exp(x) + 2;
		x += h;
		i++;
	} while (i < n);
	s = (h / 3) * ((exp(a) + 2) + 4 * (exp(a + h) + 2) + 4 * s1 + 2 * s2 + (exp(b) + 2));
	cout << s;*/

	// Задание 6
	/*a = 5
	b = 11*/
	/*double a, b, e = 0.0001, x, res;
	cout << "Введите значение промежутка a:";
	cin >> a;
	cout << "Введите значение промежутка b:";
	cin >> b;
	if (function(a) * function(b) <= 0) {
		do {
			x = (a + b) / 2;
			if (function(x) * function(a) <= 0) {
				b = x;
			}
			else {
				a = x;
			}
		} while (abs(a - b) > 2 * e);
		cout << x;
	}
	else
	{
		cout << "Корни на данном промежутке отсутствуют";
	}*/

	// Доп вариант 1
	/*x3 + x – 3
	a=1
	b=3
	*/
	/*double a, b, e = 0.0001, x, res;
	cout << "Введите значение промежутка a:";
	cin >> a;
	cout << "Введите значение промежутка b:";
	cin >> b;
	if (function1(a) * function1(b) <= 0) {
		do {
			x = (a + b) / 2;
			if (function1(x) * function1(a) <= 0) {
				b = x;
			}
			else {
				a = x;
			}
		} while (abs(a - b) > 2 * e);
		cout << x;
	}
	else
	{
		cout << "Корни на данном промежутке отсутствуют";
	}*/

	// Доп вариант 15
	/*sin(x) + 2 + x
	a = 2
	b = 7
	*/
	/*double a, b, e = 0.0001, x, res;
	cout << "Введите значение промежутка a:";
	cin >> a;
	cout << "Введите значение промежутка b:";
	cin >> b;
	if (function2(a) * function2(b) <= 0) {
		do {
			x = (a + b) / 2;
			if (function2(x) * function2(a) <= 0) {
				b = x;
			}
			else {
				a = x;
			}
		} while (abs(a - b) > 2 * e);
		cout << x;
	}
	else
	{
		cout << "Корни на данном промежутке отсутствуют";
	}*/

	// Доп вариант 16
	/*x2 + 4x – 2*/
	/*a = 0
	b = 4*/
	/*double a, b, e = 0.0001, x, res;
	cout << "Введите значение промежутка a:";
	cin >> a;
	cout << "Введите значение промежутка b:";
	cin >> b;
	if (function3(a) * function3(b) <= 0) {
		do {
			x = (a + b) / 2;
			if (function3(x) * function3(a) <= 0) {
				b = x;
			}
			else {
				a = x;
			}
		} while (abs(a - b) > 2 * e);
		cout << x;
	}
	else
	{
		cout << "Корни на данном промежутке отсутствуют";
	}*/

	double a, b, e = 0.0001, x, res;
	cout << "Введите значение промежутка a:";
	cin >> a;
	cout << "Введите значение промежутка b:";
	cin >> b;
	if (function4(a) * function4(b) <= 0) {
		do {
			x = (a + b) / 2;
			if (function4(x) * function4(a) <= 0) {
				b = x;
			}
			else {
				a = x;
			}
		} while (abs(a - b) > 2 * e);
		cout << x;
	}
	else
	{
		cout << "Корни на данном промежутке отсутствуют";
	}

	return 0;
}

