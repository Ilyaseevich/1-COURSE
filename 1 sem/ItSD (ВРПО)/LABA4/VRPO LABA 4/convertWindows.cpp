#include "convertWindows.h"

void convertWindows(string str){
	for (char ch : str) {
		if (ch >= '�' && ch <= '�') {
			cout << "������� �����: " << (ch + 32) - ch << endl;
		}
		else {
			cout << "������" << endl;
		}
	}
}

