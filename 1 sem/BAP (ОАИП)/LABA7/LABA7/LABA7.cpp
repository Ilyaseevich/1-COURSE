#include <iostream>
#include <iomanip>
#include <string>
#include <set>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	// Задание 1
	/*float x = 0, y;
	while (x < 7) {
		if (x < 4) {
			y = x;
		}
		else if (x > 4) {
			y = x * x;
		}
		else {
			y = 1;
		}
		printf("x =%f", x);
		printf("y =%5.2f", y);
		printf("\n");
		x += 2;
	}*/
	
	// Задание 6
	/*float a = 1.2, k = 3, x = 2.5, w, v;
	float m = 4;
	while (m < 6) {
		if (x < m / 2) {
			w = sqrt(0.2 * x) * k;
		}
		else if (x >= m/2) {
			w = exp(2 * k * x);
		}
		v = sqrt(pow(w, 3) + abs(x - a)) / log(1 + a);
		cout << "w = " << w << " v = " << v << " m = " << m << endl;
		m += 0.2;
	}*/

	// Задание 7

	/*int m, n;
	cout << "Введите число m: ";
	cin >> m;
	cout << "Введите число n: ";
	cin >> n;
	for (int i = 1; i < n; i++){
		int num = i;
		int summa = 0;
		while (num > 0){
			int j = num % 10;
			summa += j * j;
			num /= 10;
		}
		if (summa == m) {
			cout << "n - " << i << " подходит" << endl;
		}
	}*/
	
	/*ДОП 2*/
	/*int Rub = 100, trys = 0, a, b, c, d;
	for (a = 0; a <= 2; a++){
		for (b = 0; b <= 5; b++) {
			for (c = 0; c <= 20; c++) {
				for (d = 0; d <= 50; d++) {
					if (Rub == (a * 50 + b * 20 + c * 5 + d * 2)) {
						trys++;
					}
				}
			}
		}
	}
	cout << "Способов набора одного рубля = " << trys;*/

	/*ДОП 3*/
	/*float c1, c2, per1, per2;
	cout << "Первый сосуд: ";
	cin >> c1;
	cout << "Второй сосуд: ";
	cin >> c2;
	for (int i = 0; i < 6; i++) {
		per1 = c1 / 2;
		c1 -= per1;
		c2 += per1;
		per2 = c2 / 2;
		c2 -= per2;
		c1 += per2;
		cout << "Первый сосуд: " << setprecision(5) << c1 << endl;
		cout << "Второй сосуд: " << setprecision(5) << c2 << endl;
	}*/

	//ДОП 4
	for (int i = 1000; i < 9999; i++){
		string num;
		num = to_string(i);
		set<char> syms(num.begin(), num.end());	
		if (i % 2 == 0 && i % 7 == 0 && i % 11 == 0 && i % 10 + i / 10 % 10 + i / 100 % 10 + i / 1000 % 10 == 30 && syms.size() == 2) {
			cout << "Это число: " << i << endl;
			copy(syms.begin(), syms.end(), ostream_iterator<char>(cout, " "));
		}
	}

	

	return 0;
}