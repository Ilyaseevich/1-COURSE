#include <iostream>
#include <cstdarg>
#include <vector>

//тип функции(*имя указателя)(спецификация параметров)

using namespace std;


//Задание 1
int f1(const char* s){
	cout << s << " \nВыполняется тест №1" << endl;
	return 1;
}

int f2(const char* s){
	cout << s << " \nВыполняется тест №2" << endl;
	return 2;
}

void callfun(const char* s, int (*f)(const char*)){
	cout << " f() = " << f(s) << '\n';
}

//Задание 2
double metodPr(double(*)(double), double, double, double);    //прототип
double f(double);     //прототип

//Задание 3
int sum(int n,...);

//Задание 4
double dichotomy(double (*fun)(double), double a, double b, double e);

double func_1(double x) {
	return (pow(x, 3) + 2 * x - 4);
}

double func_2(double x) {
	return (pow(x, 2) - 1);
}

//ЗАДАНИЕ 5

bool Simple(int a) {
	if (a <= 1) {
		return false;
	}
	else{
		for (int i = 2; i <= (a / 2); ++i){
			if (a % i == 0) {
				return false;
			}
		}
	}
	return true;
}

vector<int> FindSimple(int n, ...) {
	vector<int> mas;
	va_list list;
	va_start(list, n);
	for (int i = 0; i < n; i++) {
		int a = va_arg(list, int);
		int b = va_arg(list, int);
		for (int j = a + 1; j < b; j++) {
			if (Simple(j)) {
				mas.push_back(j);
			}
		}
	}
	va_end(list);
	return mas;
}

//ДОП 8
int mn(int n, ...) {
	int min = 100;
	va_list list;
	va_start(list, n);
	for (int i = 0; i < n; i++){
		int elem = va_arg(list, int);
		if (min > elem){
			min = elem;
		}
	}
	va_end(list);
	return min;
}

//ДОП 4
int mn_task4(int n, ...) {
	int max = 0;
	va_list list;
	va_start(list, n);
	for (int i = 0; i < n; i++) {
		int elem = va_arg(list, int);
		if (max < elem) {
			max = elem;
		}
	}
	va_end(list);
	return max;
}

//ДОП 2
int fsum(int n, ...){
	int s = 0, a, b;
	va_list list;
	va_start(list, n);
	a = va_arg(list, int);
	for (int i = 1; i < n; i++) {
		b = va_arg(list, int);
		s += a * b;
		a = b;
	}
	va_end(list);
	return s;
}


int main() {
	setlocale(LC_ALL, "ru");

	//ЗАДАНИЕ 1
	/*callfun("Тест №1 вызван", f1);
	callfun("Тест №2 вызван", f2);*/

	//ЗАДАНИЕ 2

	/*double z;
	z = metodPr(f, 0.0, 2.0, 0.01);
	cout << "Result1=" << z;*/

	//ЗАДАНИЕ 3

	/*cout << sum(6, 4, 5, 1, 2, 3, 0) << endl;
	cout << sum(2, 34, 4445);*/

	//ЗАДАНИЕ 4
	/*double a, b, e = 0.001, res, x = 0;
	cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	res = dichotomy(func_1, a, b, e);
	if (res != 0) {
		cout << res << endl;
	}
	cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	res = dichotomy(func_2, a, b, e);
	if (res != 0) {
		cout << res;
	}*/

	//ЗАДАНИЕ 5
	/*vector<int> res = FindSimple(3, 3, 14, 19, 26, 7, 80);
	cout << "Простые числа (Первых нескольких интервалов): ";
	for (int num : res) {
		cout << num << " ";
	}
	res = FindSimple(2, 4, 19, 54, 69);
	cout << endl << "Простые числа (Вторых нескольких интервалов): ";
	for (int num : res) {
		cout << num << " ";
	}
	res = FindSimple(4, 10, 24, 52, 132, 5, 7, 32, 49);
	cout << endl << "Простые числа (Третьих нескольких интервалов): ";
	for (int num : res) {
		cout << num << " ";
	}*/

	//ДОП 8
	/*Написать функцию mn с переменным числом параметров, которая находит минимальное из чисел типа int.*/
	/*cout << mn(6, 5, -8, 2, 12, 5, 7) << endl;
	cout << mn(7, 8, -84, 24, -12, 55, 7, 23) << endl;
	cout << mn(3, -7, -12, 2);*/

	//ДОП 4
	/*cout << mn_task4(6, 5, -8, 2, 12, 5, 7) << endl;
	cout << mn_task4(7, 8, -84, 24, -12, 52, 7, 23) << endl;
	cout << mn_task4(3, -7, -12, 2);*/

	//ДОП 2
	cout << fsum(3, 2, 3, 4) << endl;
	cout << fsum(6, 52, 13, 7, 1, 6, 3) << endl;
	cout << fsum(5, 52, 69, 13, 7, 1) << endl;

	return 0;
}


//ЗАДАНИЕ 2
double metodPr(double (*fun)(double), double a, double b, double h){
	double x, s = 0.0;
	x = a + h;
	while (x <= b){
		s += h * fun(x);
		x = x + h;
	}
	return s / 2;
}

double f(double x){
	return (2 * x + 5);
}

//ЗАДАНИЕ 3
int sum(int n, ...){
	va_list p;
	va_start(p, n);
	int sum = 0;
	for (int i = 1; i <= n; i++) {;
	sum += va_arg(p, int);
	}
	va_end(p);
	return sum;
}

//ЗАДАНИЕ 4
double dichotomy(double (*fun)(double), double a, double b, double e) {
	double x = 0;
	if (fun(a) * fun(b) <= 0) {
		do {
			x = (a + b) / 2;
			if (fun(x) * fun(a) <= 0) {
				b = x;
			}
			else {
				a = x;
			}
		} while (abs(a - b) > 2 * e);
		return x;
	}
	else{
		cout << "Корни на данном промежутке отсутствуют";
		return 0;
	}
}
