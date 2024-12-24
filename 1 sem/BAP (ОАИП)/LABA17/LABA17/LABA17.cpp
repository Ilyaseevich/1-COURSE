#include <iostream>

using namespace std;

int sum(int**, int, int);
int* pfmin(int* p, int n);
double& dmin(double A[], int size);
bool is_elem(int* pA, int n, int iV);
long* multiply(long* mas, int n, int j, long k) {
    long* multiply = &k;
    for (int i = 2; i <= 7; i++) {
        *multiply *= mas[i];
    }
    return multiply;
}

int& task_2(int** mas, int row, int columns) {
    int index_columns = 0;
    for (int j = 0; j < columns; j++) {
        bool minus = true;
        for (int i = 0; i < row; i++) {
            if (mas[i][j] > 0 || mas[i][j] == 0) {
                minus = false;
                break;
            }
        }
        if (minus){
            index_columns = j;
            break;
        }
    }

    int sum = 0, averange;
    for (int i = 0; i < row; i++){
        sum += mas[i][index_columns];
    }

    cout << "Колонка " << index_columns + 1 << endl;
    cout << "S = " << sum << endl;

    averange = sum / row;

    return averange;
}

int* task_1_12(int* mas, int k, int b) {
    int* count = &b;
    for (int i = 0; i < k; i++){
        if (i % 2 == 1){
            if (mas[i] < 0) {
                *count += 1;
            }
        }
    }
    return count;
};

int& task_2_12(float** mas, int row, int columns) {
    int index_row = 0;
    for (int i = 0; i < row; i++) {
        bool minus = false;
        for (int j = 0; j < columns; j++) {
            if (mas[i][j] < 0) {
                minus = true;
                break;
            }
        }
        if (minus) {
            index_row = i;
            break;
        }
    }

    return index_row;
}

int* task_1_14(int* mas, int k, int spread) {
    int max = -1, min = 10;
    for (int i = 0; i < k; i++){
        if (min > mas[i]){
            min = mas[i];
        }
        if (max < mas[i]) {
            max = mas[i];
        }
    }
    cout << endl << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    int* nums = &spread;
    *nums = max - min;

    return nums;
}

int& task_2_14(int** mas, int row, int columns) {
    int index_columns = 0;
    for (int j = 0; j < columns; j++) {
        bool plus = true;
        for (int i = 0; i < row; i++) {
            if (mas[i][j] < 0 || mas[i][j] == 0) {
                plus = false;
                break;
            }
        }
        if (plus) {
            index_columns = j;
            break;
        }
    }
    return index_columns;
}

int* summa(int* mas, int k, int sum) {
    for (int i = 0; i < k; i++){
        sum += mas[i];
    }
    int* summa = &sum;
    return summa;
}

int& task_2_4(int** mas, int row, int columns) {
    int index_row = 0;
    for (int i = 0; i < row; i++) {
        bool plus = true;
        for (int j = 0; j < columns; j++) {
            if (mas[i][j] > 0) {
                plus = false;
                break;
            }
        }
        if (!plus) {
            index_row = i;
            break;
        }
    }
    return index_row;
} 


int main() {
	setlocale(LC_ALL, "ru");
    srand((unsigned)time(NULL));

	//ЗАДАНИЕ 1

    /*int i, j;
    int** matr = new int* [5];
    for (i = 0; i < 5; i++)
        matr[i] = new int[4];
    for (i = 0; i < 5; i++){
        for (j = 0; j < 4; j++){
                matr[i][j] = i + j;
                cout << matr[i][j] << ' ';
            }
            cout << endl;
        }
    cout << "S=" << sum(matr, 5, 4) << endl;
    for (int i = 0; i < 5; i++)
        delete matr[i];
    delete[] matr;*/

    //ЗАДАНИЕ 2

    /*int masB[5] = { 4, 8, 2, 6, 4 };
    (*pfmin(masB, 5))++;
    for (int i = 0; i < 5; i++)
        cout << masB[i] << ' ';*/

    //ЗАДАНИЕ 3

    //double s;
    //const int size = 5;
    //double A[] = { 5, 4.1, 3, 0.2, 11 };
    //s = dmin(A, size);
    //cout << s << endl;
    //for (int i = 0; i < size; i++)
    //    cout << " " << A[i];
    //cout << endl;
    //dmin(A, size) = 1.0;       // изменение минимума на значение 1.0 
    //for (int i = 0; i < size; i++)
    //    cout << " " << A[i];

    //ЗАДАНИЕ 4

    /*bool t; int k;
    int A[] = { 5, 4, 3, 2, 11 };
    cout << "Введите число ";
    cin >> k;
    t = is_elem(A, sizeof(A) / sizeof(int), k);
    if (t == true)
        cout << "Число есть в массиве ";
    else
        cout << "Числа нет в массиве ";*/

    //ЗАДАНИЕ 5 ЧАСТЬ 1
    /*1. Создать одномерный массив, содержащий 15 элементов, наполнить его случайными значениями в интервале от 1 до 200.
        Определить произведение элементов массива с индексами от 2 до 7.*/
    /*long* mas = new long[15];
    for (int i = 0; i < 15; i++) {
        mas[i] = 1 + rand() % 201;
        cout << mas[i] << " ";
    }
    cout << endl << "Результат умножения от 2 до 7: " << *multiply(mas, 2, 7, 1) << endl;
    delete[] mas;*/

    //ЧАСТЬ 2
    /*Если есть в матрице столбец, все элементы которого отрицательны,
    то найти среднее арифметическое этих элементов.
    Вычесть полученное значение из всех элементов матрицы.*/

    /*int row = 4, columns = 5, i, j;
    int** mas = new int* [row];
    for (i = 0; i < row; i++) {
        mas[i] = new int[columns];
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < columns; j++) {
            mas[i][j] = 1 + rand() % 11 - 9;
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }

    int average = task_2(mas, row, columns);
    cout << average << endl;
    for (i = 0; i < row; i++) {
        for (j = 0; j < columns; j++) {
            mas[i][j] -= average;
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i < row; i++) {
        delete[] mas[i];
    }
    delete[] mas;*/

    //ДОП 12 Часть 1
    /*Найти количество отрицательных элементов, стоящих на чётных местах в одномерном массиве.*/
        /*int* mas = new int[10];
        for (int i = 0; i < 10; i++) {
            mas[i] = rand() % 11 - 8;
            cout << mas[i] << " ";
        }
        cout << endl << "Количество отрицательных элементов, стоящих на чётных местах " << *task_1_12(mas, 10, 0) << endl;
        delete[] mas;*/
        

    //Часть 2
    /*Проверить, есть ли в матрице хотя бы одна строка, содержащая отрицательный элемент
    , и найти ее номер.Все элементы столбца с таким же номером уменьшить вдвое.*/
    /*int row = 4, columns = 5, i, j;
    float** mas = new float*[row];
    for (i = 0; i < row; i++) {
        mas[i] = new float[columns];
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < columns; j++) {
            mas[i][j] = 1 + rand() % 11 - 4;
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }

    int index = task_2_12(mas, row, columns);
    cout << "Строка которая содержит отрицательный элемент: " << index + 1 << endl;

    for (i = 0; i < row; i++) {
        mas[i][index] /= 2;
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < columns; j++) {
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i < row; i++) {
        delete[] mas[i];
    }
    delete[] mas;*/

    //Доп 14 Часть 1
    //1. В одномерном массиве найти минимальный и максимальный элементы.Вычислить их разность.
   /* int* mas = new int[10];
    for (int i = 0; i < 10; i++) {
        mas[i] = rand() % 11 - 5;
        cout << mas[i] << " ";
    }
    cout << endl << "Разность макс и мин: " << *task_1_14(mas, 10, 0) << endl;
    delete[] mas;*/

    //ЧАСТЬ 2
    //2. Если в матрице имеется столбец, все элементы которого положительны, то знаки элементов предыдущего столбца изменить на противоположные.
    /*int row = 4, columns = 5, i, j;
    int** mas = new int* [row];
    for (i = 0; i < row; i++) {
        mas[i] = new int[columns];
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < columns; j++) {
            mas[i][j] = 1 + rand() % 11 - 2;
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }

    int col = task_2_14(mas, row, columns);
    cout << "Столбец, который содержит положительные элементы: " << col + 1 << endl;
    if (col == 0) {
       for (i = 0; i < row; i++) {
           mas[i][columns - 1] *= -1;
       }
    }
    else{
        for (i = 0; i < row; i++) {
            mas[i][col - 1] *= -1;
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < columns; j++) {
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i < row; i++) {
        delete[] mas[i];
    }
    delete[] mas;*/
    
    //Доп 4 Часть 1
    //1. Создать одномерный массив, содержащий 15 элементов, наполнить его случайными значениями в интервале от 1 до 200. Определить сумму всех нечетных элементов массива.
    //2. Проверить, есть ли в матрице хотя бы одна строка, содержащая положительный элемент и найти ее номер.Знаки элементов предыдущей строки изменить на противоположные.
    /*int* mas = new int[15];
    for (int i = 0; i < 15; i++) {
        mas[i] = 1 + rand() % 201;
        cout << mas[i] << " ";
    }
    cout << endl << "Результат сложения всех элементов массива: " << *summa(mas, 15, 0) << endl;
    delete[] mas;*/

    //Часть 2
    int row = 4, columns = 5, i, j;
    int** mas = new int* [row];
    for (i = 0; i < row; i++) {
        mas[i] = new int[columns];
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < columns; j++) {
            mas[i][j] = 1 + rand() % 11 - 7;
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }

    int index_row = task_2_4(mas, row, columns);
    cout << "Строка, которая содержит положительный элемент: " << index_row + 1 << endl;
    if (index_row == 0) {
        for (i = 0; i < columns; i++) {
            mas[row - 1][i] *= -1;
        }
    }
    else {
        for (i = 0; i < row; i++) {
            mas[index_row - 1][i] *= -1;
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < columns; j++) {
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i < row; i++) {
        delete[] mas[i];
    }
    delete[] mas;

	return 0;
}

int sum(int** x, int n, int m){
    int res = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            res += x[i][j];
    return res;
}

int* pfmin(int* p, int n){
    int* pmin;
    for (pmin = p; n > 0; p++, n--)
        if (*p < *pmin)
            pmin = p;
    return pmin;
}

double& dmin(double A[], int size){
    int i, j = 0;
    for (i = 1; i < size; i++)
        if (A[j] > A[i])
            j = i;
    return A[j];
}

bool is_elem(int* pA, int n, int iV){
    bool bf = false;
    for (int i = 0; i < n; i++)
        if (pA[i] == iV){
            bf = true;
            break;
        }
    return bf;
}





