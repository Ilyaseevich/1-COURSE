#include <iostream>
#include <cstring>
#include <string.h>
#include <Windows.h>

using namespace std;

int square(int);
int square_1(int *);
int square_2(int &);
int sum(int x[]);
int sum_1(int *x);
int sum_2(int &x);
int massiv(int* M, int);
void matrix();
void task_1(int N, int M, int d, int** mas);
void task_2(char *str);
void task_1_5(int N, int M, int** mas);
void task_2_5(char* str, char &ch);
void task_1_8(int N, int M, int** mas);
void task_2_8(char* str);
void task_1_3(int N, int** mas);
void task_2_3(char* str, char &m);


int main() {
	setlocale(LC_ALL, "RU");
	srand((unsigned)time(NULL));
	SetConsoleCP(1251);
	//ЗАДАНИЕ 1

	/*cout << "Передача параметра по значению" << endl;
	for (int x = 1; x <= 10; x++)
			cout << square(x) << ' ';
	cout << endl;
	cout << "Передача параметра по указателю" << endl;
	for (int x = 1; x <= 10; x++)
		cout << square_1(&x) << ' ';
	cout << endl;
	cout << "Передача параметра по ссылке" << endl;
	for (int x = 1; x <= 10; x++)
		cout << square_2(x) << ' ';*/

	//ЗАДАНИЕ 2

	/*int mas[5], i;
	for (i = 0; i < 5; i++)
	{
		mas[i] = i * i;
		cout << mas[i] << ' ';
	}
	cout << endl << "result=" << sum(mas) << endl;

	int mas_1[5];
	for (i = 0; i < 5; i++)
	{
		mas_1[i] = i * i;
		cout << mas_1[i] << ' ';
	}
	cout << endl << "result=" << sum_1(mas_1) << endl;

	int mas_2[5];
	for (i = 0; i < 5; i++)
	{
		mas_2[i] = i * i;
		cout << mas_2[i] << ' ';
	}
	cout << endl << "result=" << sum_2(*mas_2) << endl;*/

	//ЗАДАНИЕ 3

	/*int choice;
	do{
		cout << "Выберите вариант работы" << endl;
		cout << "1 - с одномерным массивом" << endl;
		cout << "2 - с матрицей" << endl;
		cout << "3 - выход" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:  int* M, size, i, av;
			cout << "Введите размер массива ";
			cin >> size;
			M = new int[size];
			for (i = 0; i < size; i++){
				cout << "Введите " << i + 1 << " число ";
				cin >> *(M + i);
			}
			av = massiv(M, size);
			cout << "Результат=" << av << endl;
			delete[] M;
			break;
		case 2:  matrix();
			break;
		case 3:  break;
		}
	} while (choice <= 3);*/

	//ЗАДАНИЕ 4
	
	//int choice;
	//do{
	//	cout << "Выберите вариант работы" << endl;
	//	cout << "1 - Задание 1" << endl;
	//	cout << "2 - Задание 2" << endl;
	//	cout << "3 - выход" << endl;
	//	cin >> choice;
	//	cin.ignore();
	//	switch (choice)
	//	{
	//	case 1: {
	//		int N, M, d;
	//		cout << "Введите число строк: " << endl;
	//		cin >> N;
	//		cout << "Введите число столбцов: " << endl;
	//		cin >> M;
	//		int** mas = new int* [N];
	//		for (int i = 0; i < N; i++) {
	//			mas[i] = new int[M];
	//		}
	//		cout << "Введите число d: " << endl;
	//		cin >> d;
	//		for (int i = 0; i < N; i++) {
	//			for (int j = 0; j < M; j++) {
	//				mas[i][j] = rand() % 6;
	//				cout << mas[i][j] << " ";
	//			}
	//			cout << endl;
	//		}
	//		task_1(N, M, d, mas);
	//		for (int i = 0; i < N; i++) {
	//			delete[] mas[i];
	//		}
	//		delete[] mas;
	//		break;
	//	}
	//	case 2: {
	//		char* str = new char[100];
	//		cout << "Введите строку" << endl;
	//		gets_s(str, 100);
	//		task_2(str);
	//		delete[] str;
	//		break;
	//	}
	//	case 3: break;
	//	}
	//} while (choice < 3);

	//ДОП 5
//int choice;
//do {
//	cout << "Выберите вариант работы" << endl;
//	cout << "1 - Задание 1" << endl;
//	cout << "2 - Задание 2" << endl;
//	cout << "3 - выход" << endl;
//	cin >> choice;
//	cin.ignore();
//	switch (choice)
//	{
//	case 1: {
//		int N, M;
//		cout << "Введите число строк: " << endl;
//		cin >> N;
//		cout << "Введите число столбцов: " << endl;
//		cin >> M;
//		int** mas = new int* [N];
//		for (int i = 0; i < N; i++) {
//			mas[i] = new int[M];
//		}
//		task_1_5(N, M, mas);
//		for (int i = 0; i < N; i++) {
//			delete[] mas[i];
//		}
//		delete[] mas;
//		break;
//	}
//	case 2: {
//		char ch;
//		char* str = new char[100];
//		cout << "Введите строку" << endl;
//		gets_s(str, 100);
//		cout << "Введите символ" << endl;
//		cin >> ch;
//		task_2_5(str, ch);
//		delete[] str;
//		break;
//	}
//	case 3: break;
//	}
//} while (choice < 3);

	//Доп 8
//int choice;
//do {
//	cout << "Выберите вариант работы" << endl;
//	cout << "1 - Задание 1" << endl;
//	cout << "2 - Задание 2" << endl;
//	cout << "3 - выход" << endl;
//	cin >> choice;
//	cin.ignore();
//	switch (choice)
//	{
//	case 1:{
//		int N, M;
//		cout << "Введите число строк: " << endl;
//		cin >> N;
//		cout << "Введите число столбцов: " << endl;
//		cin >> M;
//		int** mas = new int* [N];
//		for (int i = 0; i < N; i++) {
//			mas[i] = new int[M];
//		}
//		task_1_8(N, M, mas);
//		for (int i = 0; i < N; i++) {
//			delete[] mas[i];
//		}
//		delete[] mas;
//		break;
//	}
//	case 2: {
//		char* str = new char[100];
//		cout << "Введите строку" << endl;
//		gets_s(str, 100);
//		task_2_8(str);
//		delete[] str;
//		break;
//	}
//	case 3: break;
//	}
//} while (choice < 3);


//Доп 3
//int choice;
//do {
//	cout << "Выберите вариант работы" << endl;
//	cout << "1 - Задание 1" << endl;
//	cout << "2 - Задание 2" << endl;
//	cout << "3 - выход" << endl;
//	cin >> choice;
//	cin.ignore();
//	switch (choice)
//	{
//	case 1: {
//		int N;
//		cout << "Введите число строк: " << endl;
//		cin >> N;
//		int** mas = new int* [N];
//		for (int i = 0; i < N; i++) {
//			mas[i] = new int[N];
//		}
//		task_1_3(N, mas);
//		for (int i = 0; i < N; i++) {
//			delete[] mas[i];
//		}
//		delete[] mas;
//		break;
//		
//	}	
//	case 2: {
//		char m;
//		char* str = new char[100];
//		cout << "Введите строку" << endl;
//		gets_s(str, 100);
//		cout << "Введите символ m: ";
//		cin >> m;
//		task_2_3(str, m);
//		delete[] str;
//		break;
//	}	
//	case 3: break;
//	}
//} while (choice < 3);
	return 0;
}

int square(int y){
	return y * y;
}

int square_1(int* y) {
	return *y * *y;
}

int square_2(int &y) {
	return y * y;
}

int sum(int x[]){
	int res = 0;
	for (int i = 0; i < 5; i++)
		res += x[i];
	return res;
}

int sum_1(int *x) {
	int res = 0;
	for (int i = 0; i < 5; i++)
		res += x[i];
	return res;
}

int sum_2(int &x) {
	int res = 0, *p = &x;
	for (int i = 0; i < 5; i++)
		res += p[i];
	return res;
}

int massiv(int* M, int size)
{
	int sum = 0, avar;
	for (int i = 0; i < size; i++)
		sum += *(M + i);
	avar = sum / size;
	return avar;
}

void matrix(){
	int** A, row, col, i, j, m;
	cout << "Введите число строк матрицы ";
	cin >> row;
	cout << "Введите чиcло столбцов ";
	cin >> col;
	A = new int* [row];
	for (i = 0; i < row; i++)
		A[i] = new int[col];
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
		{
			cout << "Введите A[" << i << "],[" << j << "]= ";
			cin >> *(*(A + i) + j);
		}
	m = A[0][0];
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			if (*(*(A + i) + j) > m)
				m = *(*(A + i) + j);
	cout << "Результат=" << m << endl;
	for (i = 0; i < row; i++)
		delete A[i];
	delete[] A;
}

void task_1(int N, int M, int d, int **mas){
	int row = 0;
	bool rows = true;
	for (int i = 0; i < N; i++) {
		bool rows = true;
		for (int j = 0; j < M; j++) {
			if (mas[i][j] == d) {
				row = i;
				rows = false;
			}
		}
		if (!rows) {
			break;
		}
	}
	cout << endl << row + 1 << endl;
}

void task_2(char *str){
	int sum = 0;
	for (int i = 0; i < strlen(str); i++) {
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
			sum += str[i];
		}
		else {
			if (sum != 0) {
				cout << sum << endl;
			}
			sum = 0;
		}
	}
	if (sum != 0) {
		cout << sum << endl;
	}
}

void task_1_5(int N, int M, int** mas){
	int row = 0;
	int min = 5; int max_min = 5;

	for (int i = 0; i < N; i++) {
		min = 30;
		for (int j = 0; j < M; j++) {
			mas[i][j] = 1 + rand() % 22;
			cout << mas[i][j] << " ";
			if (min > mas[i][j]) {
				min = mas[i][j];
			}
		}
		if (i == 0) {
			max_min = min;
			row = i;
		}
		if (max_min < min) {
			max_min = min;
			row = i;
		}

		cout << endl;
	}
	cout << "max_min = " << max_min << endl;
	cout << "min last = " << min << endl;
	cout << row + 1 << endl;
}

void task_2_5(char* str, char &ch){
	int count = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ch) {
			count++;
		}
	}
	cout << "Колличество повторений символа " << ch << ":" << count << endl;
}

void task_1_8(int N, int M, int** mas) {
	int min_count = 0, max_count = 0, zero_count = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			mas[i][j] = rand() % 21 - 10;
			cout << mas[i][j] << " ";
			if (mas[i][j] > 0) {
				max_count++;
			}else if (mas[i][j] < 0) {
				min_count++;
			}
			else {
				zero_count++;
			}
		}
		cout << endl;
	}
	cout << "Положительные элементы: " << max_count << endl;
	cout << "Отрицательные элементы: " << min_count << endl;
	cout << "Нулевые элементы: " << zero_count << endl;
}

void task_2_8(char* str) {
	int count = 0;
	for (int i = 0; i < strlen(str) + 1; i++) {
		if (str[i] == ' ' || str[i] == '\0') {
			count++;
		}
	}
	cout << "Общее колличество слов: " << count << endl;
}

void task_1_3(int N, int** mas) {
	int sum = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			mas[i][j] = rand() % 6;
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			sum += mas[i][j];
		}
	}

	cout << "Cумма элементов, лежащих ниже главной диагонали: " << sum << endl;
}

void task_2_3(char* str, char& m) {
	int count = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == m) {
			count++;
		}
	}
	cout << "Колличество повторений символа " << m << ":" << count << endl;
}


