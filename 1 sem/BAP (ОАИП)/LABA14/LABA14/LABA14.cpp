#include <iostream>
#include <time.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	srand((unsigned)time(NULL));
	/*ЗАДАНИЕ 1*/
	/*const int ci = 4;
	const int cj = 3;
	int a[ci][cj] = { { 1, 2, 52 }, { 3, 4, 25 }, { 5, 6, 9 }, {23, 12, 7 } };
	for (int i = 0; i < ci; i++) {
		for (int j = 0; j < cj; j++) {
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}*/

	/*Задание 2
	Часть 1
	*/
	/*const int n = 3, m = 2;
	int h = 0;
	int A[n][m] = { 0, 1, 2, 3, 4, 5 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			h += A[i][j];
		}
	}
	cout << h;*/

	/*Часть 2*/

	/*const int n = 3, m = 2;
	int h = 0;
	int C[n][m] = { 0, 1, 2, 3, 4, 5 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			h += *(*(C + i) + j);
		}
	}
		
	cout <<  h;*/

	//Задание 3
	/*const int n = 2, m = 4;
	int B[n][m];
	int i, j;
	cout << "Введите элементы массива" << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> *(*(B + i) + j);
		}	
	}

	cout << " Исходный массив:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "\n";
		for (int j = 0; j < m; j++)
			cout << "B[" << i << "," << j << "] =" << *(*(B + i) + j) << "\t";
	}
	cout << endl;
		
	
	for (int i = 0; i < n; i++) {
		int min = B[i][0];
		for (int j = 0; j < m; j++) {
			if (min > *(*(B + i) + j)){
				min = *(*(B + i) + j);
			}
		}
		cout << "Минимальный элемент " << i + 1 << " строки = " << min << endl;
	}*/

	//Задание 4 ч1
	/*const int m = 4, n = 3;
	int A[m][n];
	int min = 0, max = 0, row_max = 0, row_min = 0, column_max = 0, column_min = 0;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++) {
			A[i][j] = rand() % 31;
		}
	}

	cout << "Исходный массив" << endl;
	for (int i = 0; i < m; i++) {
		min = A[i][0];
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << "\t";
			if (min > A[i][j]){
				min = A[i][j];
				column_min = j;
				row_min = i;
			}
			if (max < A[i][j]) {
				max = A[i][j];
				column_max = j;
				row_max = i;
			}

		}
		cout << endl;
	}

	swap(A[row_min][column_min], A[row_max][column_max]);

	cout << "min = " << min << endl; 
	cout << "max = " << max << endl;

	cout << "Изменнёный массив" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << A[i][j]<< "\t";
		}
		cout << endl;
	}*/

	// ч2 
	//2. Найти в матрице первую строку, все элементы которой равны нулю.
	//Все элементы столбца с таким же номером уменьшить вдвое.
	/*const int m = 5, n = 6;
	int zero_row = 0;
	float A[m][n] = {
		{0, 2, 5, 4, 6, 8},
		{6, 8, 9, 7, 4 ,6},
		{0, 0, 0, 0, 0, 0},
		{1, 2, 3, 4, 5 ,6},
		{ 0, 0, 0, 0, 0, 0 }
	};

	for (int i = 0; i < m; i++) {
		bool zero = true;
		for (int j = 0; j < m; j++) {
			if (*(*(A + i) + j) != 0) {
				zero = false;
				break;
			}
		}
		if (zero) {
			zero_row = i;
			break;
		}
	}

	cout << "Исходный массив: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cout << *(*(A + i) + j) << "\t";
		}
		cout << endl;
	}
	cout << "Первая нулевая строка из матрицы (массива) это: " << zero_row + 1 << endl;

	for (int i = 0; i < m; i++) {
		*(*(A + i) + zero_row) /= 2;
	}

	cout << "Изменённый массив: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cout << *(*(A + i) + j) << "\t";
		}
		cout << endl;
	}*/

	//ДОП 1
	/*Дана квадратная матрица порядка 2n, элементы которой фо рмируются случайным образом и находятся в пределах от -10 до 10.
	Получить новую матрицу, переставляя ее блоки размера n×n в соответствии со схемой.*/

	//int n = 0;
	//cout << "Введите порядок матрицы 2n: ";
	//cin >> n;
	//int size = 2 * n;
	//int** A = new int*[size];
	//int** B = new int* [size];
	//for (int i = 0; i < size; i++) {
	//	*(A + i) = new int [size];
	//	*(B + i) = new int [size];
	//}

	//for (int i = 0; i < size; i++) {
	//	for (int j = 0; j < size; j++) {
	//		A[i][j] = rand() % 21 - 10;
	//		cout << A[i][j] << "\t";
	//	}
	//	cout << endl;
	//}

	//for (int i = 0; i < n; ++i) {
	//	for (int j = 0; j < n; ++j) {
	//		B[i][j] = A[i + n][j + n]; //Верхний левый
	//		B[i + n][j] = A[i][j + n];	//Нижний левый
	//		B[i][j + n] = A[i + n][j];	//Верхний правый
	//		B[i + n][j + n] = A[i][j]; // Нижний правый
	//		
	//	}
	//	cout << endl;
	//}

	//for (int i = 0; i < size; i++) {
	//	for (int j = 0; j < size; j++) {
	//		cout << B[i][j] << "\t";
	//	}
	//	cout << endl;
	//}

	//ДОП 2
	/*Латинским квадратом порядка n называется квадратная таблица размером nхn, 
	каждая строка и каждый столбец которой со - держат все числа от 1 до n.
	Для заданного n в матрице L(n, n) построить латинский квадрат порядка n.*/
	/*int n = 0;
	cout << "Введите порядок матрицы n: ";
	cin >> n;
	int size = n;
	int** L = new int*[size];
	for (int i = 0; i < size; i++) {
		*(L + i) = new int [size];
	}
	cout << "Латинская матрица: " << endl;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			*(*(L + i) + j) = (i + j) % n + 1;
			cout << *(*(L + i) + j) << "\t";
		}
		cout << endl;
	}*/

	//Доп 3
	/*Путем перестановки элементов квадратной вещественной матрицы добиться того, 
	чтобы ее максимальный элемент находился в левом верхнем углу, 
	следующий по величине - в позиции(2, 2), следующий - в позиции(3, 3) и т.д.,
	заполнив таким образом всю главную диагональ.*/
	/*int n = 0;
	cout << "Введите порядок матрицы n: ";
	cin >> n;
	int size = n;
	int max = 0, max_row = 0, max_column = 0;

	int** A = new int* [size];
	for (int i = 0; i < size; i++) {
		*(A + i) = new int[size];
	}

	cout << "Исходная матрица: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			*(*(A + i) + j) = rand() % 21 - 10;
			cout << *(*(A + i) + j) << "\t";
		}
		cout << endl;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (max < A[i][j]) {
				max = A[i][j];
				max_row = i;
				max_column = j;
			}
		}
		cout << endl;
	}
	A[max_row][max_column] = A[0][0];
	A[0][0] = max;
	for (int count = 1; count < n; count++) {
		max = A[count][count];
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (((i != j) || (i >= count) && (j >= count)) && max < A[i][j]) {
						max = A[i][j];
						max_row = i;
						max_column = j;
					}
				}
			}
			A[max_row][max_column] = A[count][count];
			A[count][count] = max;
	}

	cout << "Изменённая матрица: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}*/

	return 0;
}