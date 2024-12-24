#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <Windows.h>

using namespace std;

void trapezoid(char figure) {
	printf("\t\t\t\t\t\t""      %c %c %c %c", figure, figure, figure, figure);
	printf("\n\t\t\t\t\t\t""    %c %c %c %c %c %c", figure, figure, figure, figure, figure, figure);
	printf("\n\t\t\t\t\t\t""  %c %c %c %c %c %c %c %c", figure, figure, figure, figure, figure, figure, figure, figure);
	printf("\n\t\t\t\t\t\t""%c %c %c %c %c %c %c %c %c %c", figure, figure, figure, figure, figure, figure, figure, figure, figure, figure);
}

void trapezoidd(char shape) {
	char space = ' ';
	cout << setw(54) << setfill(space) << space;
	cout << setw(7) << setfill(shape) << shape << endl;
	cout << setw(52) << setfill(space) << space;
	cout << setw(11) << setfill(shape) << shape << endl;
	cout << setw(50) << setfill(space) << space;
	cout << setw(15) << setfill(shape) << shape << endl;
	cout << setw(48) << setfill(space) << space;
	cout << setw(19) << setfill(shape) << shape << endl;
}

void circle(char symb) {
	printf("\t\t\t\t\t\t     %c%c%c%c%c%c%c", symb, symb, symb, symb, symb, symb, symb);
	printf("\n\t\t\t\t\t\t""  %c%c%c%c%c%c%c%c%c%c%c%c%c", symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb);
	printf("\n\t\t\t\t\t\t""%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb);
	printf("\n\t\t\t\t\t""       %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb);
	printf("\n\t\t\t\t\t""       %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb);
	printf("\n\t\t\t\t\t""       %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb);
	printf("\n\t\t\t\t\t\t""%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb);
	printf("\n\t\t\t\t\t\t""  %c%c%c%c%c%c%c%c%c%c%c%c%c", symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb);
	printf("\n\t\t\t\t\t\t     %c%c%c%c%c%c%c", symb, symb, symb, symb, symb, symb, symb);
}

void circlee(char sym) {
	char prob = ' ';
	cout << setw(53) << setfill(prob) << prob;
	cout << setw(7) << setfill(sym) << sym << endl;
	cout << setw(50) << setfill(prob) << prob;
	cout << setw(13) << setfill(sym) << sym << endl;
	cout << setw(48) << setfill(prob) << prob;
	cout << setw(17) << setfill(sym) << sym << endl;
	cout << setw(47) << setfill(prob) << prob;
	cout << setw(19) << setfill(sym) << sym << endl;
	cout << setw(47) << setfill(prob) << prob;
	cout << setw(19) << setfill(sym) << sym << endl;
	cout << setw(47) << setfill(prob) << prob;
	cout << setw(19) << setfill(sym) << sym << endl;
	cout << setw(48) << setfill(prob) << prob;
	cout << setw(17) << setfill(sym) << sym << endl;
	cout << setw(50) << setfill(prob) << prob;
	cout << setw(13) << setfill(sym) << sym << endl;
	cout << setw(53) << setfill(prob) << prob;
	cout << setw(7) << setfill(sym) << sym << endl;
}

void elka(char symb) {
	printf("\t\t\t""           %c", symb);
	printf("\n\t\t\t""          %c%c%c", symb, symb, symb);
	printf("\n\t\t\t""         %c%c%c%c%c", symb, symb, symb, symb, symb);
	printf("\n\t\t\t""        %c%c%c%c%c%c%c", symb, symb, symb, symb, symb, symb, symb);
	printf("\n\t\t\t""       %c%c%c%c%c%c%c%c%c", symb, symb, symb, symb, symb, symb, symb, symb, symb);
	printf("\n\t\t\t""      %c%c%c%c%c%c%c%c%c%c%c", symb, symb, symb, symb, symb, symb, symb, symb, symb, symb, symb);
	printf("\n\t\t\t""           %c", symb);
}

void elkaa(char sym) {
	char prob = ' ';
	cout << setw(35) << setfill(prob) << prob;
	cout << setw(1) << setfill(sym) << sym << endl;
	cout << setw(34) << setfill(prob) << prob;
	cout << setw(3) << setfill(sym) << sym << endl;
	cout << setw(33) << setfill(prob) << prob;
	cout << setw(5) << setfill(sym) << sym << endl;
	cout << setw(32) << setfill(prob) << prob;
	cout << setw(7) << setfill(sym) << sym << endl;
	cout << setw(31) << setfill(prob) << prob;
	cout << setw(9) << setfill(sym) << sym << endl;
	cout << setw(30) << setfill(prob) << prob;
	cout << setw(11) << setfill(sym) << sym << endl;
	cout << setw(35) << setfill(prob) << prob;
	cout << setw(1) << setfill(sym) << sym << endl;
}

void arrows(char symb) {
	printf("\t""     %c", symb);														printf("\t""          %c", symb);
	printf("\n\t""     %c%c", symb, symb);												printf("\t""         %c%c", symb, symb);
	printf("\n\t""%c%c%c%c%c%c%c%c", symb, symb, symb, symb, symb, symb, symb, symb);   printf("\t""%c%c%c%c%c%c%c%c", symb, symb, symb, symb, symb, symb, symb, symb);
	printf("\n\t""     %c%c", symb, symb);												printf("\t""         %c%c", symb, symb);
	printf("\n\t""     %c", symb);														printf("\t""          %c", symb);

	printf("\n\n\t""     %c", symb);													printf("\t\t""  %c", symb);
	printf("\n\t""    %c%c%c", symb, symb, symb);										printf("\t\t""  %c", symb);
	printf("\n\t""   %c%c%c%c%c", symb, symb, symb, symb, symb);						printf("\t""  %c", symb);
	printf("\n\t""     %c", symb);														printf("\t\t""%c%c%c%c%c", symb, symb, symb, symb, symb);
	printf("\n\t""     %c", symb);														printf("\t\t"" %c%c%c", symb, symb, symb);
	printf("\n\t""     %c", symb);														printf("\t\t""  %c", symb);
}

void arrowss(char sym) {
	char prob = ' ';
	cout << setw(13) << setfill(prob) << prob;
	cout << setw(1) << setfill(sym) << sym;
	cout << setw(12) << setfill(prob) << prob;
	cout << setw(1) << setfill(sym) << sym << endl;
	cout << setw(13) << setfill(prob) << prob;
	cout << setw(2) << setfill(sym) << sym;
	cout << setw(10) << setfill(prob) << prob;
	cout << setw(2) << setfill(sym) << sym << endl;
	cout << setw(9) << setfill(prob) << prob;
	cout << setw(7) << setfill(sym) << sym;
	cout << setw(8) << setfill(prob) << prob;
	cout << setw(7) << setfill(sym) << sym << endl;
	cout << setw(13) << setfill(prob) << prob;
	cout << setw(2) << setfill(sym) << sym;
	cout << setw(10) << setfill(prob) << prob;
	cout << setw(2) << setfill(sym) << sym << endl;
	cout << setw(13) << setfill(prob) << prob;
	cout << setw(1) << setfill(sym) << sym;
	cout << setw(12) << setfill(prob) << prob;
	cout << setw(1) << setfill(sym) << sym << endl << endl;

	cout << setw(13) << setfill(prob) << prob;
	cout << setw(1) << setfill(sym) << sym;
	cout << setw(12) << setfill(prob) << prob;
	cout << setw(1) << setfill(sym) << sym << endl;
	cout << setw(12) << setfill(prob) << prob;
	cout << setw(3) << setfill(sym) << sym;
	cout << setw(11) << setfill(prob) << prob;
	cout << setw(1) << setfill(sym) << sym << endl;
	cout << setw(11) << setfill(prob) << prob;
	cout << setw(5) << setfill(sym) << sym;
	cout << setw(10) << setfill(prob) << prob;
	cout << setw(1) << setfill(sym) << sym << endl;
	cout << setw(13) << setfill(prob) << prob;
	cout << setw(1) << setfill(sym) << sym;
	cout << setw(10) << setfill(prob) << prob;
	cout << setw(5) << setfill(sym) << sym << endl;
	cout << setw(13) << setfill(prob) << prob;
	cout << setw(1) << setfill(sym) << sym;
	cout << setw(11) << setfill(prob) << prob;
	cout << setw(3) << setfill(sym) << sym << endl;
	cout << setw(13) << setfill(prob) << prob;
	cout << setw(1) << setfill(sym) << sym;
	cout << setw(12) << setfill(prob) << prob;
	cout << setw(1) << setfill(sym) << sym << endl;
}

int main() {
	setlocale(LC_ALL, "RU");
	// Задание 1
	/*int t;
	cout << "Введите целое число t: ";
	cin >> t;
	cout << "Число t: " << t <<"\n";
	cout << "Тип Размер в байтах:\n";
	cout << "int: " << sizeof(int) << "\n";
	cout << "float: " << sizeof(float) << "\n";
	cout << "double: " << sizeof(double) << "\n";
	cout << "char: " << sizeof(char) << "\n";*/

	//float a;
	//cout << "Введите число с плавающей точкой a: ";
	//cin >> a;
	//char sym;
	//cout << "Введите символ sym: ";
	//cin >> sym;

	//cout << "t: " << t << "\n";
	//cout << "a: " << a << "\n";
	//cout << "sym: " << sym << "\n";

	// Задание 2
	
	
	/*char c, probel = ' ';
	cout << "Введите символ: "; cin >> c;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;

	int q;
	float w;
	cout << "Введите целое q: ";
	cin >> q;
	cout << "Введите плавающее w: ";
	cin >> w;
	cout << setbase(16) << q << endl;
	cout << setprecision(2) << w;*/

	//Задание 3
	/*printf("\tPrivet \n");
	printf("\rИльясеевич Роман Сергеевич\nИСиТ\t1-3\n");*/

	/*float x, y;
	printf("Введите x: ");
	scanf_s("%f", &x);
	y = x * x + sin(x);
	printf("%f", y);*/

	/*float k, a, x, t, u;
	printf("Введите k, a, x (через пробел): ");
	scanf_s("%f %f %f", &k, &a, &x);
	t = 2 * tan(k) / a + log(3 + x) + exp(x);
	u = sqrt(t + 1) - sin(x) * cos(t);
	printf("%f %f", t, u);*/
	
	/*float x, m, z, y, w;
	printf("Введите x, m, z (через пробел): ");
	scanf_s("%f %f %f", &x, &m, &z);
	y = sqrt(1 + x) - cos(2 / m);
	w = 0.6 * z - 2 * exp(-2 * y * m);
	printf("%f %f",y, w);*/

	/*float z, a, m, n, y, s;
	printf("Введите z, a, m, n(через пробел): ");
	scanf_s("%f %f %f %f", &z, &a, &m, &n);
	y = (z + log(z)) / (exp(-3) + sqrt(a));
	s = (1 + m * n) / log(1 + z);
	printf("%.3f %.3f", y, s);*/

	// Задание 4
	/*SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char name[20];
	puts("Как тебя зовут?");
	gets_s(name);
	printf("Привет! %s", name);*/
	
	//Задание 6
	// Часть 1
	/*printf("Введите любой символ: ");
	char c = ' ';
	scanf_s("%c", &c, 1);
	trapezoid(c);*/


	/*char shape;
	cout << "Введите любой символ: ";
	cin >> shape;
	trapezoidd(shape);*/
	

	// Часть 2
	/*float pi = 3.14f, c, res;
	cout << "Введите длину окружности: ";
	cin >> c;
	res = pow(c, 2) / (4 * pi);
	cout << "Площадь круга: " << res;*/

	/*float pi = 3.14f, c, res;
	printf("Введите длину окружности: ");
	scanf_s("%f", &c);
	res = pow(c, 2) / (4 * pi);
	printf("%f", res);*/

	//Доп задания
	
	//ВАРИАНТ4
	//Часть1
	/*printf("Введите любой символ: ");
	char symb;
	scanf_s("%c", &symb, 1);
	circle(symb);

	char sym;
	cout << endl << "Введите символ: ";
	cin >> sym;
	circlee(sym);*/

	//Часть 2
	/*int x, y, z, res1;
	float res2;
	cout << "Введите число x: ";
	cin >> x;
	cout << "Введите число y: ";
	cin >> y;
	cout << "Введите число z: ";
	cin >> z;

	res1 = (x + y + z) / 3;
	
	
	x = abs(x);
	y = abs(y);
	z = abs(z);

	res2 = cbrt((x + y + z));
	cout << "Среднее арифметиическое: " << res1 << endl << "Среднее геометрическое: " << res2;*/

	/*int resint,x,y,z;
	float resfloat;
	printf("Введтите числа x,y,z (через пробел): ");
	scanf_s("%d %d %d", &x, &y, &z);
	resint = (x + y + z) / 3;

	
	x = abs(x);
	y = abs(y);
	z = abs(z);
	
	resfloat = cbrt((x + y + z));
	printf("Среднее арифметиическое: %d", resint);
	printf("\nСреднее геометрическое: %f", resfloat);*/

	//Вариант 3

	//Часть 1
	/*printf("Введите любой символ: ");
	char symb = ' ';
	scanf_s("%c", &symb, 1);
	elka(symb);*/
	

	/*char sym;
	cout << endl << "Введите символ: ";
	cin >> sym;
	elkaa(sym);*/
	

	//Часть 2
	int a, b, c = 10;
	//a)
	/*cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	a = b + c;
	b = a + c;
	cout << "a: " << a << " b: " << b
	//б)
	/*cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	a += b;
	b += a;
	cout << "a: " << a << " b: " << b;*/

	//а)
	/*printf("Введите число a и b (через пробел): ");
	scanf_s("%d%d", &a, &b);
	a = b + c;
	b = a + c;
	printf("a: %d", a);
	printf("\nb: %d", b);*/
	//б)
	/*printf("Введите число a и b (через пробел): ");
	scanf_s("%d%d", &a, &b);
	a += b;
	b += a;
	printf("a: %d", a);
	printf("\nb: %d", b);*/


	//Вариант 9
	//Часть 1
	/*printf("Введите любой символ: ");
	char symb;
	scanf_s("%c", &symb, 1);
	arrows(symb);

	char sym;
	cout << endl << "Введите символ: ";
	cin >> sym;
	arrowss(sym);*/
	

	//Часть 2
	/*int a;*/
	/*cout << "Введите число a: ";
	cin >> a;
	a *= a;
	a *= a;
	cout << a;
	cout << "a: " << a;*/

	/*printf("Введите число a: ");
	scanf_s("%d", &a);
	a *= a;
	a *= a;
	printf("a: %d", a);*/

	
	return 0;
}