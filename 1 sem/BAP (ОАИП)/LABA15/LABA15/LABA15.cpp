#include <stdio.h>	
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "ru");
	srand((unsigned)time(0));

	//Задание 1
	//int* ptr, i, n, max = 0, max_index = 0, mod;
	//printf("Input size of massiv, n<30 \n");
	//scanf_s("%d", &n);

	//if (!(ptr = (int*)malloc(n * sizeof(int)))){		//выделение памяти и проверка,	
	//	puts("Not enough memory");		//достаточно ли для нее места
	//	return 0;
	//}
	//	for (i = 0; i < n; i++)
	//	{
	//		printf("Input element [%d]\n", i + 1);
	//		scanf_s("%d", ptr + i);
	//		mod = abs(*(ptr + i));
	//		if (max < mod) {
	//			max = mod;
	//			max_index = i;
	//		}
	//	}
	//	printf("\nMassiv: \n",i + 1);

	//	for (i = 0; i < n; i++)
	//		printf("%d ", *(ptr + i));
	//	printf("\nMax element index[%d]", max_index);
	//	printf(": %d", max);

	//free(ptr);     //освобождение динамической памяти

	// Задание 2

	/*char* pStr;
	char c, * pc;
	int j, length, count = 0;
	cout << "Введите размер строки";
	cin >> length;
	pStr = new char[length + 1];
	cout << "Введите строку ";
	cin >> pStr;
	cout << "Введите символ ";
	cin >> c;
	pc = &c;
	for (j = 0; j < length; j++) {
		if (pStr[j] == *pc) {
			count++;
		}
	}
	cout << count << " повторений символа " << c << endl;
	delete[] pStr;*/

	// Задание 3
	//int size, sum = 0, **A;
	//long mult = 1;
	//cout << "Enter size ";
	//cin >> size;
	//A = new int* [size];    //выделение динам.памяти
	//for (int i = 0; i < size; i++) {
	//	A[i] = new int[size];
	//}
	//for (int i = 0; i < size; i++)
	//	for (int j = 0; j < size; j++)
	//		A[i][j] = 1 + rand() % 10;
	//
	//for (int** ptr = A; ptr != A + size; ++ptr){
	//	for (int* it = *ptr; it != *ptr + size; ++it){
	//		cout << "\t" << *it;
	//		if (*it % 2 == 0){
	//			mult *= *it;
	//			sum += *it;
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "sum: " << sum << endl;
	//cout << "mult: " << mult << endl;
	//for (int k = 0; k < size; k++) //освобождение памяти
	//delete[] A[k];
	//delete[] A;

	//Задание 4 часть 1
	/*int* A, n, count = 0;
	float average, sum = 0;
	cout << "Введите размер массива: ";
	cin >> n;
	A = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		*(A + i) = rand() % 11;
		cout << *(A + i) << " ";
		sum += *(A + i);
	}
	cout << endl << "Сумма: " << sum;
	average = sum / n;
	cout << endl << "Среднее арифм: " << average;
	
	for (int i = 0; i < n; i++) {
		if (average < *(A + i)) {
			count++;
		}
	}

	cout << endl << "Количество элементов больше среднего арифметического: " << count;
	
	free(A);*/

	//Часть 2
	int rows = 3, cols = 4, count_rows = 0, max = 0, max_repeat_count = 0, max_repeat;
	int** A = new int* [rows];
	for (int i = 0; i < rows; ++i) {
		A[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> *(*(A + i) + j);
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++) {
		bool zero = true;
		for (int j = 0; j < cols; j++) {
			if (*(*(A + i) + j) > max) {
				max = *(*(A + i) + j);
			}
			if (*(*(A + i) + j) == 0) {
				zero = false;
				break;
			}
		}
		if (zero) {
			count_rows++;
		}
	}
	
	//проверка на макс число, повторяющее неск раз
	for (int z = 0; z <= max; z++) {
		max_repeat_count = 0;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				if (*(*(A + i) + j) == z) {
					++max_repeat_count;
					if (max_repeat_count >= 2) {
						max_repeat = z;
					}
				}
			}
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << *(*(A + i) + j) << " ";
		}
		cout << endl;
	}
	cout << endl << "Количество строк, не содержащих ни одного нулевого элемента: " << count_rows;
	cout << endl << "Максимальный элемент: " << max;
	cout << endl << "Максимальное из чисел, встречающихся в заданной матрице более одного раза: " << max_repeat;

	for (int i = 0; i < rows; i++) {
		delete[] A[i];
	}
	delete[] A;

	//Доп 2 ч.1
	/*Задан массив A из n элементов.Проверить, есть ли в нём отрицательные элементы.Если есть, то найти наибольшее значение k, при котором A[k] < 0.*/
	/*int* A, n, max_index = -1;
	cout << "Введите число элементов: ";
	cin >> n;
	A = (int*)calloc(n, sizeof(int));
	for (int k = 0; k < n; k++) {
		A[k] = rand() % 21 - 10;
		if (A[k] < 0){
			max_index = k;
		}
		cout << A[k] << " ";
	}

	if (max_index != -1){
		cout << endl << A[max_index] << endl << max_index;
	}else{
		cout << endl << "Отрицательных элемнтов нет!";
	}

	free(A);*/
	
	//Часть 2
	/*Дана матрица.Переставляя ее строки и столбцы, добиться того, чтобы наибольший элемент оказался в верхнем левом углу.*/
	/*int n, rows = 5, colums = 5,max = 0, max_rows = 0, max_columns = 0;
	int** A = new int*[rows];
	for (int i = 0; i < rows; i++) {
		A[i] = new int[colums];
	}

	for (int i = 0; i < rows; i++) {
		for ( int j = 0; j < colums; j++){
			A[i][j] = rand() % 21 - 10;
			if (A[i][j] > max) {
				max = A[i][j];
				max_rows = i;
				max_columns = j;
			}
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << max << endl << endl;

	A[max_rows][max_columns] = A[0][0];
	A[0][0] = max;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < colums; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++) {
		delete[] A[i];
	}
	delete[] A;*/

	//Доп 12 Часть 1
	/*1. Задан массив A из n элементов.Подсчитать, сколько раз встречается в нем максимальное число.
	2. Проверить, есть ли в матрице хотя бы одна строка, содержащая положительный элемент, и найти ее номер.Знаки элементов предыдущей строки изменить на противоположные.*/
	/*int n, *A, max = 0, count = 0;
	cout << "Подсчитать n = элементов: ";
	cin >> n;
	A = (int*)calloc(n, sizeof(n));
	for (int i = 0; i < n; i++) {
		A[i] = rand() % 10;
		cout << A[i] << " ";
		if (A[i] > max) {
			max = A[i];
		}
	}
	cout << endl << max;
	for (int i = 0; i < n; i++) {
		if (max == A[i]) {
			count++;
		}
	}
	cout << endl << "Максимальное число встречается: " << count << " раз";
	free(A);*/

	//Часть 2
	/*int rows = 3, columns = 4, b = 5, plus_rows = 0, plus_columns = 0;
	plus_rows = 1 + rand() % 2 ;
	plus_columns = rand() % 4;
	cout << plus_rows << " " << plus_columns << endl;
	int** A = new int*[rows];
	for (int i = 0; i < rows; i++) {
		A[i] = new int[columns];
	}
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			A[i][j] = rand() % 10 - 10;
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	A[plus_rows][plus_columns] = b;
	cout << endl;

	for (int i = plus_rows - 1; i < plus_rows; i++) {
		for (int j = 0; j < columns; j++) {
			A[i][j] *= -1;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Номер строки содержащая положительный элемент: " << plus_rows + 1;

	for (int i = 0; i < rows; i++) {
		delete[] A[i];
	}
	delete[] A;*/
	

	//Доп 9
	//1. В одномерном массиве, состоящем из n вещественных элементов, 
	// вычислить произведение положительных элементов массива и сумму элементов массива, расположенных до минимального элемента.

	/*int n, index = 0, count = 0;
	float* A, min = 0, multiply = 1, sum = 0;
	cout << "Введите n: ";
	cin >> n;
	A = (float*)calloc(n, sizeof(float));
	for (int i = 0; i < n; i++) {
		A[i] = (double)rand() / RAND_MAX * 100 - 50;
		cout << A[i] << " ";
		if (i == 0) {
			min = A[i];
		}
		if (A[i] < min) {
			min = A[i];
			index = i;
		}
		if (A[i] > 0) {
			multiply *= A[i];
		}
	}

	for (int i = 0; i < index; i++) {
		sum += A[i];
	}
	
	cout << endl << "Минимальный элемент массива: " << min;
	cout << endl << "Произведение положительных элементов массива: " << multiply;
	cout << endl << "Cумма элементов массива, расположенных до минимального элемента: " << sum;

	free(A);*/

	//Часть 2
	//2. Найти в матрице первую строку, все элементы которой положительны, и сумму этих элементов.Уменьшить все элементы матрицы на эту сумму.
	/*int rows = 5, columns = 5, rows_index = -1, sum = 0;
	bool plus = true;
	int** A = new int* [rows];
	for (int i = 0; i < rows; i++){
		A[i] = new int[columns];
	}

	for (int i = 0; i < rows; i++){

		for (int j = 0; j < columns; j++) {
			A[i][j] = 2 + rand() % 6 - 2;
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++) {
		plus = true;
		for (int j = 0; j < columns; j++) {
			if (A[i][j] <= 0) {
				plus = false;
			}
		}
		if (plus) {
			rows_index = i;
			break;
		}
	}

	if (rows_index == -1){
		cout << "В матрице нет положительных строк";
	}
	else{
		for (int j = 0; j < columns; j++) {
			sum += A[rows_index][j];
		}
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				A[i][j] -= sum;
				cout << A[i][j] << " ";
			}
			cout << endl;
		}
		
		cout << "Сумма первой положительной строки: " << sum;
		cout << endl << "Первая положительная строка: " << rows_index + 1;
	}

	for (int i = 0; i < rows; i++){
		delete[] A[i];
	}
	delete[] A;*/
	
	return 0;
}
