#include <iostream>
#include <ctime>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	// ЗАДАНИЕ 1

	/*const int N = 100;
	int i, sz, A[N], rmn = 0, rmx = 99, sum = 0;
	cout << "Введите размер массива ";
	cin >> sz;
	cout << "Массив A:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++) {
		A[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
		sum += A[i];
		cout << A[i] << endl;
	}
	cout << "Cумма всех элементов: " << sum;*/

	// ЗАДАНИЕ 2
	/*int i, k, size = 4;
	double massivA[] = {5, -4, 17.1, 9, 1}, sum = 0;
	cout << "Введите номер элемента (от 0 до 4): ";
	cin >> k;
	for (i = k; i <= size; i++)
		massivA[i] = massivA[i + 1];
	size--;
	for (i = 0; i <= size; i++) {
		sum += massivA[i];
		cout << massivA[i] << endl;
	}
	sum /= 4;
	cout << "Среднее значение элементов исходного массива: " << sum;*/

	// ЗАДАНИЕ 3

	/*const int maxSize = 30;
	int n, i, kmax = 0, kmin = 0;
	int a[maxSize];
	srand((unsigned)time(NULL));
	cout << "Введите размер массива (<30): " << endl;
	cin >> n;
	if (n > 30) {
		return 0;
	}
	else {
	for (i = 0; i < n; i++) {
		a[i] = rand() % 30;
		cout << a[i] << " ";
	}
	cout << endl;
	for (i = 1; i < n; i++) {
		if (a[i] > a[kmax]) {
			kmax = i;
		}
		if (a[i] < a[kmin]) {
			kmin = i;
		}
	}
	cout << "Максимальный элемент: " << a[kmax] << endl;
	cout << "Минимальный элемент: " << a[kmin] << endl;
	}*/
	
	// ЗАДАНИЕ 4
	/*const int size = 5;
	int masA[size], masB[size], masC[size * 2];
	int k = 0, j = 0, i = 0;
	printf("A:\n");
	for (int n = 0; n < size; n++)
		scanf_s("%d", &masA[n]);
	printf("B:\n");
	for (int n = 0; n < size; n++)
		scanf_s("%d", &masB[n]);
	do
	{
		if (masA[k] <= masB[j])
			masC[i++] = masA[k++];
		else
			masC[i++] = masB[j++];
		if (k == size)
			for (; j < size; j++)
				masC[i++] = masB[j];
		if (j == size)
			for (; k < size; k++)
				masC[i++] = masA[k];
	} while (i < size * 2);
	printf("\n");
	for (i = 0; i < size * 2; i++)
		printf("%d ", masC[i]);
	printf("\n");*/

	// ЗАДАНИЕ 5
	// Часть 1
	
	srand((unsigned)time(NULL));
	int size = 0, min = 0, sumArith = 0;
	cout << "Введите размер массива: ";
	cin >> size;

	vector<int> mas(size);
	for (int i = 0; i < size; i++){
		mas[i] = rand() % 100;
		if (i == 0) {
			min = mas[i];
		}
		if (mas[i] < min) {
			min = mas[i];
		}
	}
	mas.erase(remove(mas.begin(), mas.end(), min), mas.end()); //Удаление всех элементов, равных минимальному значению
	size = mas.size();

	for (int i = 0; i < size; i++) {
		sumArith += mas[i];
	}
	sumArith /= size;

	mas.insert(mas.begin(), 3, sumArith);

	for (int i = 0; i < size; i++) {
		cout << mas[i] << endl;
	}
	cout << "Минимальное значение: " << min << " ";

	// Часть 2
	/*Задан массив из k символов.Расположить в массиве символы в обратном порядке*/
	/*const int sz = 100;
	int size = 0;
	cout << "Введите размер массива: ";
	cin >> size;
	char mas[sz];
	for (int i = 0; i < size; i++){
		cout << "Введите символ " << i << " :";
		cin >> mas[i];
	}

	for (int i = 0; i < size / 2; i++) {
		char x = mas[i];
		mas[i] = mas[size - 1 - i];
		mas[size - 1 - i] = x;
	}

	for (int i = 0; i < size; i++) {
		cout << mas[i] << endl;
	}*/


	//ДОП 2
	/*Подсчитать количество пар соседних элементов массива с одинаковыми значениями*/
	/*int size = 0, counter = 0;
	const int sz = 100;
	cout << "Введите размер массива: ";
	cin >> size;

	int maspairs[sz];
	for (int i = 0; i < size; i++){
		cout << "Введите элементы массива " << i << " :";
		cin >> maspairs[i];
	}
	for (int i = 0; i < size - 1; i++) {
		if (maspairs[i] == maspairs[i + 1]) {
			counter++;
		}
	}
	cout << "Количество пар соседних элементов массива с одинаковыми значениями: " << counter;*/

	//ДОП 3
	/*3.	Найти в массиве наибольшее число подряд идущих одинаковых элементов.*/
	/*int size = 0, counter = 0, max = 0;
	const int sz = 100;
	cout << "Введите размер массива: ";
	cin >> size;

	int mas[sz];
	for (int i = 0; i < size; i++) {
		cout << "Введите элементы массива " << i << " :";
		cin >> mas[i];
	}
	for (int i = 0; i < size - 1; i++) {
		if (mas[i] == mas[i + 1]) {
			counter++;
			if (counter > max){
				max = counter;
			}
		}
		else{
			counter = 0;
		}		
	}
	cout << "Наибольшее число подряд идущих одинаковых элементов: " << ++max;*/

	//ДОП 1
	//Имеются результаты n ежедневных измерений количества выпавших осадков.
	//За какую из недель (отрезок времени длиной 7 дней), считая с начала периода измерений, выпало наибольшее количество осадков?
	/*int n, week, max_rainfall;
	n = week = max_rainfall = 0;
	const int sz = 100;
	cout << "Введите количество дней(Больше 7 дней): ";
	cin >> n;
	int rainfall[sz];
	for (int i = 0; i < n; i++) {
		cout << "Введите количество выпавших осадков за " << i + 1 << " день:";
		cin >> rainfall[i];
	}

	for (int i = 0; i <= n - 7; i++){
		int sum = 0;
		for (int j = i; j < i + 7; j++){
			sum += rainfall[j];
		}
		if (sum > max_rainfall) {
			max_rainfall = sum;
			week = i;
		}
	}
	cout << "Больше всего осадков выпало на " << week + 1 << " неделе" << endl;
	cout << "Количество осадков: " << max_rainfall << endl;*/


	

	return 0;
}