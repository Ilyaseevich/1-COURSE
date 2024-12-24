#include <iostream>
#include <cctype>
#include <Windows.h>

using namespace std;

void convertASCII(char ch) {
    if (isalpha(ch)) {
        if (isupper(ch)){
            cout << "Разница кодов: " << (ch + 32) - ch << endl;
        }
        else {
            cout << "Вы ввели не прописную букву" << endl;
        }
    }
    else{
        cout << "Ошибка" << endl;
    }
}

void convertWindows(char ch) {
        if (ch >= 'А' && ch <= 'Я') {
            cout << "Разница кодов: " << (ch + 32) - ch << endl;
        }        
    else {
        cout << "Ошибка" << endl;
    }
}

void printcode(char ch) {
    if (isdigit(ch)) {
        int z = (int)(ch);
        cout << z << endl;
    }
}


int main() {
    SetConsoleCP(1251);
	setlocale(LC_ALL, "ru");
        int k;
        char ch;

        cout << "1 - Определение разницы значений кодов в ASCII буквы в прописном и строчном написании \n2 - Определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании\n3 - Вывод в консоль кода символа, соответствующего введенной цифре\n4 - Выход из программы\n";

        while (true){
            cout << "Введите число k: ";
            cin >> k;
            if (k == 4) {
                cout << "Выход из программы" << endl;
                break;
            }
            switch (k) {
            case 1:
                cout << "Введите латинскую прописную букву : ";
                cin >> ch;
                convertASCII(ch); break;
            case 2:
                cout << "Введите прописную букву из кирилицы: ";
                cin >> ch;
                convertWindows(ch); break;

            case 3:{}
                cout << "Введите цифру: ";
                cin >> ch;
                printcode(ch); break;
            default: cout << "Ввели неправильно"; break;
            }
            
        }
	return 0;
}