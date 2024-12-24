#include <iostream>
#include <stdio.h>
#include <cmath>
#include <conio.h>
#include <vector>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	//Задание 1
	/*float a, sum = 0, multiplication = 1;
	const int size = 4;
	for (int i = 0; i < size; i++) {
		cout << "Введите число a " << i << ": ";
		cin >> a;
		multiplication *= a;
		sum += pow(a,2);
	}
	cout << sum << endl << multiplication;*/

	/*int factorial = 1;
	for (int i = 1; i < 6; i++) {
		factorial *= i;
	}
	cout << factorial;*/

	//Задание 2
	/*char ch;
	float sv, x, sum = 0;
	float count = 0;
	do{
		printf("\nEnter x:"); scanf_s("%f", &x);
		sum += x;
		count++;
		sv = sum / count;
		printf("sv=%1.3f\n", sv);
		printf("if continue input 'y' else 'n' ");
		ch = _getch();
	} while (ch != 'n');*/

	/*float sum = 0, a, t, p;
	for (int n = 2; n < 10; n++) {
		t = pow(n, log((float)n));
		p = pow(log((float)n), n);
		a = t / p;
		sum += a;
	}
	printf("S=%f\n", sum);*/

	//Задание 3
	/*int count = 5, n = 1;
	double b, m = 9999;
	for (int i = 0; i < count; i++){
		cout << "Введите b " << i << endl;
		cin >> b;
		if (b < m){
			m = b;
			n = i;
		}
	}
	cout << "m = " << m << endl;
	cout << "n = " << n << endl;*/

	// Задание 4
	// Часть 1
	/*double a, b, c, d = 0;
	const int n = 6;
	for (int i = 1; i <= n; i++){
		cout << "Введите число a " << i << ":" << endl;
		cin >> a;
		cout << "Введите число b " << i << ":" << endl;
		cin >> b;
		c = sqrt(a + b);
		d += c / i;
		cout << "c" << i << " = " << c << endl;
		cout << "d = " << d << endl;
	}*/

	// Часть 2 
	/*double x, y, t = 0.5f, min = 0;
	for (t; t < 3; t += 0.5) {
		if (t > 2){
			for (int i = 0; i < 5; i++){
				cout << "Введите число x" << i << ": ";
				cin >> x;
				if (i == 0){
					min = x;
				}
				if (x < min) {
					min = x;
				}
			}
			y = min;
		}
		else {
			y = cos(pow(t, 2));
		}
		cout << "y = " << y << endl;
	}*/

	//Доп 1
	/*int n = 0, a, sum = 0;
	cout << "Введите последовательности из n целых чисел(n = ?): ";
	cin >> n;
	for (int i = 0; i < n; i++){
		cout << "Введите число a: ";
		cin >> a;
		if (a % 2 == 0) {
			sum += a;
		}
	}
	cout << sum;*/

	//Доп 2
	/*int n = 0, a, order = 0;
	cout << "Введите последовательность из n целых чисел(n = ?): ";
	cin >> n;
	for (int i = 0; i < n; i++){
		cout << "Введите число a: ";
		cin >> a;
		if (a < 0) {
			order = i;
		}
	}
	cout << "Порядковый номер последнего отрицательного элемента: " << order;*/

	//Доп 3
	/*В последовательности найти число чередований знака, т.е.число переходов с минуса на плюс или с плюса на минус*/
	int n = 0, counter = 0;
	cout << "Введите последовательность из n целых чисел(n = ?): ";
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++){
		cout << "Введите число a: ";
		cin >> a[i];
	}

	bool plus = false;
	if (a[0] > 0)
		plus = true;
	for (int j = 1; j < n; j++){
		if (plus && a[j] < 0){
			counter++;
			plus = false;
		}
		else if (!plus && a[j] > 0){
				counter++;
				plus = true;
			}
	}
	cout << counter;



	return 0;
}
