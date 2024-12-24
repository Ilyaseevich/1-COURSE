#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	srand((unsigned)time(NULL));
	// ЗАДАНИЕ 1
	/*int a = 10, *pa, b = 20, *pb;
	pa = &a;
	cout << &a << " " << a << endl;
	cout << pa << " " << *pa << endl;
	pb = &b;
	cout << &b << " " << b << endl;
	cout << pb << " " << *pb << endl;
	*pa = *pb;
	cout << &a << " " << a << endl;*/

	/*float a, * pa, s = 0; int i;
	pa = &a;
	for (i = 0; i <= 4; i++) {
		cout << "a = ";
		cin >> a;
		s += *pa;
	}
	cout << "s = " << s << endl;*/

	// ЗАДАНИЕ 2
	
	// Указатель на константу
	
	//int a = 9;
	//const int* pa = &a;
	///**pa = 12;*/
	//int b = 20;
	//pa = &b;
	//cout << pa << " " << *pa;

	// Константный указатель
	
	//int a = 99;
	//int* const pa = &a;
	//int b = 44;
	///*pa = &b;*/
	//*pa = 12;
	//cout << pa << " " << *pa;

	// Константный указатель на константу

	//int a = 99;
	//const int* const pa = &a;
	///**pa = 33;*/
	///*int b = 44;*/
	///*pa = &b;*/
	//cout << pa << " " << *pa;

	//Прога
	
	/*int A[10], max = 0;

	for (int i = 0; i < 10; i++) {
		A[i] = rand() % 99;
		if (A[i] > max) {
			max = A[i];
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << A[i] << " ";
	}
	cout << endl << max;*/
	

	/*int A[10] = {0}, max = 0;

	for (int i = 0; i < 10; i++) {
		*(A + i) = rand() % 99;
		if (*(A + i) > max) {
			max = *(A + i);
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << *(A + i) << " ";
	}
	cout << endl << max;*/
	
	/*int A[10], *pA, max = 0;

	for (pA = A; pA < A + 10; pA++){
		*pA = rand() % 99;
		if (*pA > max) {
			max = *pA;
		}
	}
	
	for (pA = A; pA < A + 10; pA++){
		cout << *pA << " ";
	}
	cout << endl << max;*/

	//ЗАДАНИЕ 3
	/*int i, k, sz = 5;
	float A[] = { 5, -4, 17.1, 9, 1 };
	cout << "Введите номер элемента (от 0 до 4): ";
	cin >> k;
	for (i = k; i < sz - 1; i++) {
		*(A + i) = *(A + i + 1);
	}
	sz--;
	for (i = 0; i < sz; i++) {
		cout << *(A + i) << endl;
	}*/

	//Задание 4
	/*int val = 1;
	cout << "val 1 =" << val << endl;
	int& rv = val;
	rv = 5;
	cout << "val 2 =" << val;*/

	/*int val = 1;
	cout << "val 1 =" << val << endl;
	int& rv = val;
	rv = 5;
	int* pval = &rv;
	*pval = 8;
	cout << "val 2 =" << val;*/
	
	// ЗАДАНИЕ 5
	// ЧАСТЬ 1
	int n, k, i;
	int* A, * B, * C, * D; \
	int count_B = 0, count_C = 0, count_D = 0;

	cout << "Введите количевство элементов (n): ";
	cin >> n;
	A = new int[n];
	B = new int[n];
	C = new int[n];
	D = new int[n];
	cout << "Введите число k (от 0 до 20): ";
	cin >> k;
	for (i = 0; i < n; i++){
		*(A + i) = rand() % 21;
		if(k > *(A + i)){
			*(B + count_B++) = i;
		}
		else if (k < *(A + i)) {
			*(C + count_C++) = i;
		}
		else {
			*(D + count_D++) = i;
		}
	}
	cout << "Исходный массив: ";
	for (i = 0; i < n; i++) {
		cout << *(A + i) << " ";
	}
	cout << endl << "Индексы элементов которые меньше k: ";
	for (i = 0; i < count_B; i++){
		cout << *(B + i) << " ";
	}
	cout << endl << "Индексы элементов которые больше k: ";
	for (i = 0; i < count_C; i++) {
		cout << *(C + i) << " ";
	}
	cout << endl << "Индексы элементов которые равны k: ";
	for (i = 0; i < count_D; i++) {
		cout << *(D + i) << " ";
	}

	delete[] A;
	delete[] B;
	delete[] C;
	delete[] D;

	// Часть 2
	// В целом числе N выделить цифры, кратные числу k, и записать их в одномерный массив. 
	/*int N, k, x, mas_count = 0;
	int* mas = new int[50];
	cout << "Введите число N: "; cin >> N;
	cout << "Введите число k: "; cin >> k;
	while(N > 0){
		x = N % 10;
		if (x % k == 0) {
			*(mas + mas_count++) = x;
		}
		N /= 10;
	}
	for (int i = 0; i < mas_count; i++){
		cout << *(mas + i) << " ";
	}
	delete[] mas;*/
	

	//ДОП 12
	//1. Заданы два массива A и B, каждый из n элементов.Подсчитать количество таких чисел k, для которых : A[k] = B[k], A[k] > B[k] и A[k] < B[k]
	/*int n, less = 0, more = 0, equal = 0;
	int* pA, * pB;
	cout << "Введите размер массивов n: "; cin >> n;
	pA = new int[n];
	pB = new int[n];

	for (int k = 0; k < n; k++) {
		*(pA + k) = rand() % 5;
		*(pB + k) = rand() % 5;
		if (*(pA + k) == *(pB + k)) {
			equal++;
		}
		else if (*(pA + k) > *(pB + k)) {
			more++;
		}
		else {
			less++;
		}
	}

	for (int i = 0; i < n; i++){
		cout << *(pA + i) << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << *(pB + i) << " ";
	}
	cout << endl;
	cout << "Количество A[k] = B[k]: " << equal << endl;
	cout << "Количество A[k] > B[k]: " << more << endl;
	cout << "Количество A[k] < B[k]: " << less << endl;*/

	//Часть 2
	/*int k, i, sz = 10;
	int* A, * B, * C, * D; \
	int count_B = 0, count_C = 0, count_D = 0;

	A = new int[sz];
	B = new int[sz];
	C = new int[sz];
	D = new int[sz];
	cout << "Введите число k (от 0 до 10): ";
	cin >> k;
	for (i = 0; i < sz; i++){
		*(A + i) = rand() % 10;
		if(k > *(A + i)){
			*(B + count_B++) = i;
		}
		else if (k < *(A + i)) {
			*(C + count_C++) = i;
		}
		else {
			*(D + count_D++) = i;
		}
	}
	cout << "Исходный массив: ";
	for (i = 0; i < sz; i++) {
		cout << *(A + i) << " ";
	}
	cout << endl << "Индексы элементов которые меньше k: ";
	for (i = 0; i < count_B; i++){
		cout << *(B + i) << " ";
	}
	cout << endl << "Индексы элементов которые больше k: ";
	for (i = 0; i < count_C; i++) {
		cout << *(C + i) << " ";
	}
	cout << endl << "Индексы элементов которые равны k: ";
	for (i = 0; i < count_D; i++) {
		cout << *(D + i) << " ";
	}

	delete[] A;
	delete[] B;
	delete[] C;
	delete[] D;*/

	//ДОП 14
	// Часть 1
	/*int* px, * py, count = 0;
	px = new int[4];
	py = new int[7];
	for (int i = 0; i < 4; i++) {
		*(px + i) = rand() % 15;
	}
	for (int j = 0; j < 7; j++) {
		*(py + j) = rand() % 15;
	}
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 7; j++) {
			if (*(px + i) == *(py+j)){
				count++;
			}
		}
	}
	cout << count;
	delete[] px;
	delete[] py;*/

	//Часть 2
	/*int* K, t, *pLess, *pMore, count_less = 0, count_more = 0;
	K = new int[7];
	pLess = new int[7];
	pMore = new int[7];
	cout << "Введите число t: "; cin >> t;
	for (int i = 0; i < 7; i++){
		*(K + i) = rand() % 15;
		if (t > *(K + i)) {
			*(pLess + count_less++) = *(K + i);
		}
		else {
			*(pMore + count_more++) = *(K + i);
		}
	}
	for (int i = 0; i < 7; i++) {
		cout << *(K + i) << " ";
	}

	for (int i = 0; i <= count_less; i++){
		*(K + i) = *(pLess + i);
	}

	for (int j = count_less; j < count_more + count_less; j++) {
		*(K + j) = *(pMore + j - count_less);
	}

	cout << endl;
	for (int i = 0; i < 7; i++) {
		cout << *(K + i) << " ";
	}
	delete[] K;
	delete[] pLess;
	delete[] pMore;*/

	//ДОП 5
	// ЧАСТЬ 1
	/*float* mas, sum = 0, medium, *pLess, *pMore;
	int i, j = 0, count_less = 0, count_more = 0;
	mas = new float[9];
	pLess = new float[9];
	pMore = new float[9];
	for (i = 0; i < 9; i++) {
		*(mas + i) = rand() % 7;
		sum += *(mas + i);
	}
	medium = sum / 9;
	cout << sum << " " << medium << endl;

	for (i = 0; i < 9; i++) {
		cout << *(mas + i) << " ";
	}
	cout << endl;
	
	for (i = 0; i < 9; i++) {
		if (medium > *(mas + i)){
			*(pLess + count_less++) = *(mas + i);
		}else{
			*(pMore + count_more++) = *(mas + i);
		}
	}

	for (int i = 0; i < count_less; i++) {
		*(mas + i) = *(pLess + i);
	}

	for (int j = count_less; j < count_more + count_less; j++) {
		*(mas + j) = *(pMore + j - count_less);
	}

	for (i = 0; i < 9; i++) {
		cout << *(mas + i) << " ";
	}
	delete[] mas;
	delete[] pLess;
	delete[] pMore;*/
	

	// ЧАСТЬ 2
	/*int* pa, * pb, count = 0;
	pa = new int[6];
	pb = new int[3];
	for (int i = 0; i < 6; i++) {
		*(pa + i) = rand() % 15;
	}
	for (int j = 0; j < 3; j++) {
		*(pb + j) = rand() % 15;
	}
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 3; j++) {
			if (*(pa + i) == *(pb+j)){
				count++;
			}
		}
	}
	cout << count;
	delete[] pa;
	delete[] pb;*/

	//Задание на ссылку
	// Вычислить y
	float x = 1.4, m = 6, y;
	float& res = y;
	res = sqrt(1 + x) - cos(2 / m);
	cout << "res: \t"	<< res << endl;
	cout << "y = \t" << y;
	

	return 0;
}