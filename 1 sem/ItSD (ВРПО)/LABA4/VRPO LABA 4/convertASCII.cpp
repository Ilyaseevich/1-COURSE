#include "convertASCII.h"

void convertASCII(string str){
	for (char ch : str) {
		if (isalpha(ch)) {
			if (isupper(ch)) {
				cout << "������� �����: " << (ch + 32) - ch << endl;
		    }
		    else {
				cout << "�� ����� �� ��������� �����" << endl;
		    }
		}
		else {
			cout << "������" << endl;
		}
	}
}
