#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	/*int x = 10, y = 6, y_1 = -6;
	cout << (x << 1) << endl;
	cout << (x >> 1) << endl;
	cout << (x & y) << endl;
	cout << (x | y) << endl;
	cout << (x ^ y) << endl;
	cout << "~x = " << (~x) << endl;
	cout << "~y = " << (~y);*/

	// ЗАДАНИЕ 1
	/*unsigned int value; int i;
	const unsigned int mask = 1 << 31;
	cout << "Введите целое число ";
	cin >> value;
	cout << "Двоичный вид: ";
	for (i = 1; i <= 32; i++) {
		putchar(mask & value ? '1' : '0');
		value <<= 1;
		if (i % 8 == 0) {
			putchar(' ');
		}
	}*/

	// ЗАДАНИЕ 2
	/*int A = 150; char tmp[33];
	_itoa_s(A, tmp, 2);
	cout << "Число A: " << tmp << endl;
	_itoa_s(0x24, tmp, 2);
	cout << "Маска A: " << tmp << endl;
	_itoa_s(A | 0x24, tmp, 2);
	cout << "Результат: " << tmp << endl;*/

	// ЗАДАНИЕ 3
	/*int A; char tmp[33];
	cout << "Введите число ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Число в двоичном виде = " << tmp << endl;
	if ((A & 7) == 0) {
		cout << "Число кратно 8" << endl;
	}
	else {
		cout << "Число не кратно 8" << endl;
	}*/

	/*int A; char tmp[33];
	cout << "Введите число ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Число в двоичном виде = " << tmp << endl;
	if ((A & 3) == 0) {
		cout << "Число кратно 4" << endl;
	}
	else {
		cout << "Число не кратно 4" << endl;
	}*/

	// ЗАДАНИЕ 4
	/*char tmp[33];
	int A, B, maskA = 14;
	int maskB = ~maskA >> 1;
	cout << "Первое число А="; cin >> A;
	cout << "Второе число В="; cin >> B;
	_itoa_s(A, tmp, 2);
	cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B=" << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A & maskA) >> 1, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "Маска для В: " << tmp << endl;
	_itoa_s(B & maskB, tmp, 2);
	cout << "Очищены биты в B: " << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> 1)), tmp, 2);
	cout << "Результат B=" << tmp << endl;*/


	// ЗАДАНИЕ 5
	//ЧАСТЬ 1
	/*char tmp[33];
	int A, B, maskA = 240;
	int maskB = ~maskA >> 4;
	cout << "Первое число А="; cin >> A;
	cout << "Второе число В="; cin >> B;
	_itoa_s(A, tmp, 2);
	cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B=" << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A & maskA) >> 4, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "Маска для В: " << tmp << endl;
	_itoa_s(B & maskB, tmp, 2);
	cout << "Очищены биты в B: " << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> 4)), tmp, 2);
	cout << "Результат B=" << tmp << endl;*/


	/*ЧАСТЬ 2*/
	/*
	char tmp[33];
	int A = 172, B = 12, n, m, p = 4, q = 1, maskA, maskB;
	n = m = 3;

	_itoa_s(A, tmp, 2);
	cout << "Число A: " << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "Число B: " << tmp << endl;

	maskA = ((1 << n) - 1) << p; // '-1' потому что заменяем n битов
	_itoa_s(maskA, tmp, 2);
	cout << tmp << endl;

	A = A | maskA;
	_itoa_s(A, tmp, 2);
	cout << tmp << endl;

	int bits = (A >> p) & ((1 << m) - 1);
	_itoa_s(bits, tmp, 2);
	cout << "bits: " << tmp << endl;

	maskB = ~(((1 << m) - 1) << q);
	_itoa_s(maskB, tmp, 2);
	cout << tmp << endl;

	B = B & maskB;
	_itoa_s(B, tmp, 2);
	cout << tmp << endl;
	B = B | (bits << q);
	_itoa_s(B, tmp, 2);
	cout << tmp << endl;*/

	//	ВАРИАНТ 4
	// Часть 1
	/*int A; char tmp[33];
	cout << "Введите число ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Число в двоичном виде = " << tmp << endl;
	if ((A & 3) == 0) {
		cout << "Число кратно 4" << endl;
	}
	else {
		cout << "Число не кратно 4" << endl;
	}*/

	//Часть 2
	/*char tmp[33];
	int A = 536, n = 2, p = 2, maskA;
	_itoa_s(A, tmp, 2);
	cout << "Число A: " << tmp << endl;
	maskA = (((1 << n) - 1) << p);
	_itoa_s(maskA, tmp, 2);
	cout << tmp << endl;
	A = A | maskA;
	_itoa_s(A, tmp, 2);
	cout << tmp << endl;*/

	//ВАРИАНТ 15
	//ЧАСТЬ 1
	/*int A; char tmp[33];
	cout << "Введите число ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Число в двоичном виде = " << tmp << endl;
	if ((A & 1) == 0) {
		cout << "Число кратно 2" << endl;
	}
	else {
		cout << "Число не кратно 2" << endl;
	}*/
	
	//ЧАСТЬ 2
	/*char tmp[33];
	int A = 980, n = 2, p = 5, maskA;
	_itoa_s(A, tmp, 2);
	cout << "Число A: " << tmp << endl;
	maskA = ~(((1 << n) - 1) << p);
	_itoa_s(maskA, tmp, 2);
	cout << tmp << endl;
	A = A & maskA;
	_itoa_s(A, tmp, 2);
	cout << tmp << endl;*/

	//ВАРИАНТ 16
	//ЧАСТЬ 1
	/*char tmp[33];
	int A, B, maskA = 14;
	int maskB = ~maskA >> 1;
	cout << "Первое число А="; cin >> A;
	cout << "Второе число В="; cin >> B;
	_itoa_s(A, tmp, 2);
	cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B=" << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A & maskA) >> 1, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "Маска для В: " << tmp << endl;
	_itoa_s(B & maskB, tmp, 2);
	cout << "Очищены биты в B: " << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> 1)), tmp, 2);
	cout << "Результат B= " << tmp << endl;*/
	
	// 2.	Установить в 1два бита числа А, начиная с четвертого по счету справа.
	char tmp[33];
	int A = 198, maskA;

	_itoa_s(A, tmp, 2);
	cout << "Число A: " << tmp << endl;

	maskA = (((1 << 2) - 1) << 3);
	_itoa_s(maskA, tmp, 2);
	cout << tmp << endl;

	A = A | maskA;
	_itoa_s(A, tmp, 2);
	cout << tmp << endl;
	
	

	return 0;
}