#include <iostream>
#include <Windows.h>
#include <string>
#include "convertASCII.h"
#include "convertWindows.h"
#include "printcode.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    setlocale(LC_ALL, "ru");
    int k;
    string str;

    cout << "1 - Определение разницы значений кодов в ASCII буквы в прописном и строчном написании \n2 - Определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании\n3 - Вывод в консоль кода символа, соответствующего введенной цифре\n4 - Выход из программы\n";

    while (true) {
        cout << "Введите число k: ";
        cin >> k;
        if (k == 4) {
            cout << "Выход из программы" << endl;
            break;
        }
        switch (k) {
        case 1:
            cout << "Введите латинскую прописную букву : ";
            cin >> str;
            convertASCII(str); break;
        case 2:
            cout << "Введите прописную букву из кирилицы: ";
            cin >> str;
            convertWindows(str); break;

        case 3: {}
            cout << "Введите цифру: ";
            cin >> str;
            printcode(str); break;
        default: cout << "Ввели неправильно"; break;
        }
    }
    return 0;
}