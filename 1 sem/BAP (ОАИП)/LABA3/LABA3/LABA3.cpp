#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	/*Задание 2*/
	/*float x = 3, y;
	y = x * x + sin(x);
	cout << y;*/
	
	// Задание 3
	/*float k = 4, a = 4.1f, x = 5*pow(10, -5), t, u;
	t = 2 * tan(k) / a + log(3 + x) + exp(x);
	u = sqrt(t + 1) - sin(x) * cos(t);
	cout << "Переменная t: " << t <<"\n";
	cout << "Переменная u: " << u;*/

	// Задание 4 (7 варариант)
	/*float x = 1.4, m = 6, z = 0.05*pow(10, -5), y, w;
	y = sqrt(1 + x) - cos(2 / m);
	w = 0.6 * z - 2 * exp(-2 * y * m);
	cout << "Переменная y: " << y << "\n";
	cout << "Переменная w: " << w;*/

	/*float z = 1.7f, a = 4 * pow(10, -8), m = 3, n = 3, y, s;
	y = (z + log(z)) / (exp(-3) + sqrt(a));
	s = (1 + m * n) / log(1 + z);
	cout << "Переменная y: " << y << "\n";
	cout << "Переменная w: " << s;*/


	// ДОП ВАРИАНТЫ (2, 5, 11)
	/*float n = 2, b = -0.12f, x = 1.3f * pow(10, -6), z, y;
	z = 1 / (x - 1) + sin(x) - sqrt(n);
	y = (exp(-b) + 1) / 2 * z;
	cout << "Переменная z: " << z << "\n";
	cout << "Переменная y: " << y;*/

	/*float b = 40, x = 1.1f, a = 5 * pow(10, -6), w, v;
	w = (a + b) * tan(x) / (x + 1);
	v = 1 / 2 * b - sqrt(w - a * b);
	cout << "Переменная w: " << w << "\n";
	cout << "Переменная v: " << v;*/

	/*float a = 1.5f, x = -1.8f, z= 15 * pow(10, -6), w, d;
	w = tan(1) * (1 + x) + z - exp(a);
	d = 9 * sqrt(2 - 3 * x) + abs(a + 1);
	cout << "Переменная w: " << w << "\n";
	cout << "Переменная d: " << d;*/

	float a = 1.5f, b = -8.1f, j = 4, t= 4*pow(10, - 4), s, w, v;
	s = sqrt(t * a / t + 1) + 4 * exp(2 * b);
	w = s * a / (1 + 0.1f * a);
	v = s + j * sqrt(pow(a, 2) + pow(b, 2));
	cout << "Переменная s: " << s << "\n";
	cout << "Переменная w: " << w << "\n";
	cout << "Переменная v: " << v;
	return 0;
}