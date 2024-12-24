#include "convertASCII.h"

void convertASCII(string str){
	for (char ch : str) {
		if (isalpha(ch)) {
			if (isupper(ch)) {
				cout << "Разница кодов: " << (ch + 32) - ch << endl;
		    }
		    else {
				cout << "Вы ввели не прописную букву" << endl;
		    }
		}
		else {
			cout << "Ошибка" << endl;
		}
	}
}
