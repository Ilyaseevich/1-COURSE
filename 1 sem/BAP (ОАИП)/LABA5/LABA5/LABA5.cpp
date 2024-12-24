#include <iostream>
//#include <Windows.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	//ЗАДАНИЕ 1

	//double b, z, x = 4.e-3f, s = 1.1f, j;
	//cout << "Введите j: " << endl;
	//cin >> j;
	//b = s + (5 * x + j);
	//cout << "b = " << b << endl;
	///*if (b < 1.5) {
	//	z = sqrt(x + 0.3 * j) + b;
	//}
	//else
	//	z = abs(x * j + b);*/
	//z = b < 1.5f ? sqrt(x + 0.3 * j) + b : z = abs(x * j + b);
	//cout << "j = " << j << " z = " << z << endl;

	//ЗАДАНИЕ 2 max(x + y + z, xyz) ∙ min(x, y, z).
	/*float x, y, z, max, min;
	printf("Введите число x: "); scanf_s("%f", &x);
	printf("Введите число y: "); scanf_s("%f", &y);
	printf("Введите число z: "); scanf_s("%f", &z);
	if ((x + y + z) < (x * y * z)) {
		max = (x * y * z);
	}
	else{
		max = (x + y + z);
	}
	min = x;
	if (min > y) {
		min = y;
	}
	if (min > z) {
		min = z;
	}
	printf("max(x + y + z, xyz) * min(x, y, z) = %f", max*min );*/

	/*float x, y, z, max, min;
	cout << "Введите число x: "; cin >> x;
	cout << "Введите число y: "; cin >> y;
	cout << "Введите число z: "; cin >> z;
	if ((x + y + z) < (x * y * z)) {
		max = (x * y * z);
	}
	else {
		max = (x + y + z);
	}
	min = x;
	if (min > y) {
		min = y;
	}
	if (min > z) {
		min = z;
	}
	cout << "max(x + y + z, xyz) * min(x, y, z) = " << max * min;*/

	//ЗАДАНИЕ 3
	/*int k;
	puts("Вы хотите купить машину? (1 - да, 2 - нет)");
	cin >> k;
	switch (k) {
	case 1: {
		puts("Какую?(1 - Майбах, 2 - Тойота, 3 - Лада)");
		cin >> k;
		switch (k) {
		case 1: puts("Не слишком дорого?"); break;
		case 2: puts("Хороший выбор"); break;
		case 3: puts("Сомнительный выбор"); break;
		default: puts("Некорректный ввод"); break;
		}
		break;
	}
	case 2: puts("Ходите пешком"); break;
	default: puts("Некорректный ввод"); break;
	}*/

	//ЗАДАНИЕ 4 Даны числа a, b, c. Если a < b < c, то каждое число заменить наибольшим, если a > b > c, то числа оставить без изменений, в противном случае все числа заменить их квадратами.
	/*int a, b, c;
	printf("Введите числа a, b, c (через пробел): ");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a < b && b < c) {
		a = c;
		b = c;
	}
	else if (a == b && b == c) {
		a *= a;
		b *= b;
		c *= c;
	}
	cout << "а = " << a << " b = " << b << " c = " << c;*/


	// Задание 5 В переменную Y ввести номер года. Определить, является ли год високосным.

	/*int y;
	cout << "Введите год: ";
	cin >> y;

	if ( (y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
		cout << "Год високосный";
	}
	else {
		cout << "Год не високосный";*/
	/*}*/

	/*(y % 4 == 0 && y % 100 != 0) || y % 400 == 0 ? cout << "Год високосный" : cout << "Год не високосный";*/

	// Задание 6
	/*int i;
	cout << "Ты любишь C++?(1-да, 2-нет)" << endl;
	cin >> i;
	switch (i){
	case 1: {
		cout << "Ты будешь учить его?(1-конечно!, 2-нет)" << endl;
		cin >> i;
		switch(i){
		case 1: cout << "Наш человек!"; break;
		case 2: cout << "Подумай получше"; break;
		default: cout << "Некорректный ввод"; break;
		}
		break;
	}
	case 2: cout << "Неправильно"; break;
	default: cout << "Некорректный ввод"; break;
	}*/

	//ДОП ЗАДАНИЯ 1,


	//1.
	//Введены с клавиатуры три числа. Найти сумму тех чисел, которые делятся на 5. 
	//Если таких чисел нет, то вывести текст «Error». Использовать только тернарные операторы.

	/*int a, b, c;
	printf("Введите 3 числа (через пробел): ");
	scanf_s("%d%d%d", &a, &b, &c);
	int summa = (a % 5 == 0 ? a : 0) + (b % 5 == 0 ? b : 0) + (c % 5 == 0 ? c : 0);
	summa == 0 ? cout << "Error": cout << summa;*/

	//2.
	//Пройдет ли шар радиуса r через ромбообразное отверстие с диагоналями p и q ?
	/*float r, p, q, rvpis;
	cin >> r;
	cin >> p;
	cin >> q;
	rvpis = p*q/(2*sqrt(pow(p,2) + pow(q,2)));
	cout << rvpis;
	if (r <= rvpis) {
		cout << endl <<"Шар пройдёт";
	}
	else {
		cout  << endl << "Шар не пройдёт";
	}*/

	//3.Можно ли коробку размером a х b х c упаковать в посылку размером r х s х t ? «Углом» укладывать нельзя.
	float a, b, c, r, s, t;
	printf("Введите размеры коробки (через пробел): ");
	scanf_s("%f%f%f", &a, &b, &c);
	printf("Введите размеры посылки (через пробел): ");
	scanf_s("%f%f%f", &r, &s, &t);
	if ((a < r && b < s && c < t) ||
		(a < r && b < t && c < s) ||
		(b < r && a < s && c < t) ||
		(b < r && a < t && c < s) ||
		(c < r && a < s && b < t) ||
		(c < r && a < t && b < s)) {
		cout << "Посылка влезет";
	}
	else {
		cout << "Посылка не влезет";
	}

	return 0;
}