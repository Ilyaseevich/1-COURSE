#include "convertWindows.h"

void convertWindows(string str){
	for (char ch : str) {
		if (ch >= 'А' && ch <= 'Я') {
			cout << "Разница кодов: " << (ch + 32) - ch << endl;
		}
		else {
			cout << "Ошибка" << endl;
		}
	}
}

