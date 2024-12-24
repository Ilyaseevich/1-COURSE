#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	//Задание 1
	/*float z, x, y, sd;
	sd = 1.0 / 3.0;
	for (int i = 0; i < 4; i++) {
		printf("Введите число x%d: ", (i+1));
		scanf_s("%f", &x);
		z = 2 * pow(x, 2);
		y = z + pow(x, sd);
		printf("Ваше число x:%5.2f", x);
		printf("\nЧисло y:%5.2f", y);
		printf("\n");
	}*/

	//Задание 2
	/*float z, x = 3, y;
	while (x < 4.2f){
		z = 2 * pow(x, 2);
		y = z + pow(x, (float) 1 / 3);
		x += 0.1;
		cout << "y: " << y << endl;
	}*/

	//Задание 3
	/*float z, x = 3, y;
	do
	{
		z = 2 * pow(x, 2);
		y = z + pow(x, (float)1 / 3);
		x += 0.1;
		cout << "y: " << y << endl;
	} while (x < 4.1f);*/
	

	//Задание 4
	/*int n, i, j;
	printf("Enter n: ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++){
		for (j = 1; j <= n; j++) {
			printf("%5d", i * j);
		}
		if (i == 1){
			cout << endl;
			cout << setw(5 * n) << setfill('-') <<
				'-' << endl;
		}	
		printf("\n");
	}*/

	//Задание 5
	/*float x = 0.9f, y = 2, t = 6 * pow(10, -5), i, z, q;*/

	/*for (int g = 0; g < 3; g++){
		cout << "Введите i " << (g + 1) << ": ";
		cin >> i;
		z = t * pow(y, 2) - sqrt(i + x) * tan(y);
		q = sqrt(pow(z, 2) + 5 * z) * log(y);
		cout << "z: " << z << " q: " << q << endl;
	}*/

	/*i = 1;
	while (i < 2){
		z = t * pow(y, 2) - sqrt(i + x) * tan(y);
		q = sqrt(pow(z, 2) + 5 * z) * log(y);
		cout << "z: " << z << " q: " << q << endl;
		i += 0.2f;
	}*/

	/*i = 2;
	while (i < 3){
		for (int r = 0; r <3; r++){
			printf("Введите число: ");
			scanf_s("%f", &x);
			z = t * pow(y, 2) - sqrt(i + x) * tan(y);
			q = sqrt(pow(z, 2) + 5 * z) * log(y);
			printf("z =%6.2f", z); printf(" q =%6.2f", q); printf("\n");
		}
		i += 0.2;
	}*/

	//Доп задание 6
	string num, result;
	cin >> num;
	for (char c : num){
		if (c != '3' && c != '6') {
			result += c;
		}
	}
	cout << result;
	


	/* Доп 1*/
	//float p, q;
	//cout << "Цена товаров: ";
	//cin >> p; // Цена товаров
	//cout << "Выручка: ";
	//cin >> q; // Выручка
	//float revenue = p;

	//int days = 0;
	//while (revenue < q) {
	//	revenue *= 1.03;
	//	days++;
	//}
	//cout << "Дни: " << days;

	// Доп 2
	
	//int n; 
	//double p;
	//cout << "На протяжении скольки лет фирма закупала оборудование? ";
	//cin >> n;
	//cout << "Амортизация за это время (в %): ";
	//cin >> p;
	//p = (1 - p / 100);
	//vector<double> price(n); // vector - динамический массив
	//for (int i = 0; i < n; i++){
	//	cout << "Стоимость оборудования за " << (i+1) << "год: ";
	//	cin >> price[i];
	//}

	//double allsumma = 0.0f;
	//for (int j = 0; j < n; j++) {
	//	float value = price[j];
	//	value *= p;
	//	
	//	allsumma += value;
	//
	//}
	//cout << allsumma;
	
	return 0;
}