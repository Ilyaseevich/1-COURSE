#include <iostream>
#include <cstring>
#include <string.h>
#include <Windows.h>

using namespace std;

void remove(char* str) {
    char* words[200];
    char* text = nullptr;
    int count = 0;

    char* token = strtok_s(str, " ", &text);
    while (token != nullptr) {
        bool Duplicate = false;
        for (int i = 0; i < count; ++i) {
            if (strcmp(words[i], token) == 0) {
                Duplicate = true;
                break;
            }
        }
        if (!Duplicate) {
            words[count++] = token;
        }
        token = strtok_s(nullptr, " ", &text);
    }
    for (int i = 0; i < count; ++i) {
        cout << words[i] << " ";
    }
    cout << endl;
}

void reverse(char* mas) {
    int len = (int)strlen(mas);
    for (int i = 0; i < len / 2; i++) {
        swap(mas[i], mas[len - i - 1]);
    }
}

void task_4(char* str) {
    char* words[200];
    char* text = nullptr;
    int count = 0;

    char* token = strtok_s(str, " ", &text);
    while (token != nullptr) {
        words[count++] = token;
        token = strtok_s(nullptr, " ", &text);
    }

    for (int i = 0; i < count; ++i) {
        if (i % 2 == 1) {
            reverse(words[i]);
        }
    }

    for (int i = 0; i < count; ++i) {
        if (i % 2 == 1) {
            cout << words[i] << " ";
        }
    }   
}


void finalize(char* str, char* sym) {
    int symlen = strlen(sym);
    char* text = nullptr;

    char* token = strtok_s(str, " ", &text);
    while (token != nullptr) {
        int lentoken = strlen(token);
        if (lentoken >= symlen && strcmp(token + lentoken - symlen, sym) == 0) {
            cout << token << " ";
        }
        token = strtok_s(nullptr, " ", &text);
    }
}

int main(){
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    
    /*int num = 5;
    char symb, new_symbol = ' ';
    char* pc = &symb;
    *pc = num + '0';
    cout << *pc << ' ';
    cout << symb << ' ';
    if (symb >= '0' && symb <= '9')
        num = symb - '0';
    cout << num << ' ';
    symb = 'g';
    if (symb >= 'a' && symb <= 'z')
        new_symbol = symb - 'a' + 'A';
    cout << new_symbol << ' ';*/

    /*char str[] = "Text";
    int count = 0;
    char* pstr;
    pstr = &str[0];
    if (str)
        while (*pstr++)
            ++count;
    cout << count;*/

    //Задание 2
    /*char str[50], s[20];
    int i, j, i1, i2;
    cout << "Input string:";
    cin >> str;
    for (i = strlen(str); i >= 0; i--)
        if (str[i] == '\/')  break;
    i2 = i;
    for (j = (i2 - 1); j >= 0; j--)
        if (str[j] == '\/')  break;
    i1 = j;
    if (i2 == i1)
        printf(" '\/' ");
    else
    {
        strncpy_s(s, &str[i1 + 1], i2 - i1 - 1);
        s[i2 - i1 - 1] = 0;
        cout << "katalog:" << s << "\n";
    }*/

    //Задание 3
    /*char s, t[20];
    int i, j, n;
    cout << "Input string: ";
    gets_s(t);
    cout << "Input symbol: ";
    cin >> s;
    n = strlen(t);
    for (i = 0; i <= n; i++)
        if (t[i] == s)
            for (j = i; j <= n; j++)
                t[i] = t[i + 1];
    for (i = 0; i < n; i++)
        cout << t[i];*/

    //Задание 4
    /*char t[3][20];
    int i, n;
    cout << "Input size (<=3): ";
    cin >> n;
    cin.ignore(cin.rdbuf()->in_avail());
    for (i = 0; i < n; i++)
    {
        cout << "Input string: ";
        gets_s(t[i]);
    }
    for (i = 0; i < n; i++)
        puts(t[i]);*/

    //Задание 5 ч1 
    /*char s[256];
    int i, count;
    puts("Enter string: ");
    gets_s(s);
    for (count = i = 0; s[i] != 0; i++)
    {
        if (count >= 0) {
            if (s[i] == '(')  count++;
            if (s[i] == ')')  count--;
        }
    }
    if (!count)
        puts("Ok\n");
    else
        puts("Not Ok\n");*/

    //ч2
    /*char s[256];
    int count;
    char* ps;
    puts("Enter string: ");
    gets_s(s);
    for (count = 0, ps = s; *ps != 0; ps++)
    {
        if (count >= 0) {
            if (*ps == '(')  count++;
            if (*ps == ')')  count--;
        }
    }
    if (count == 0)
        puts("Ok\n");
    else
        puts("Not Ok\n");*/

    //Задание 6 ч1
    /*Преобразовать строку: после каждой буквы a добавить символ «!».*/
    //int k = 0, i;
    //const int sz = 80;
    //char str_1[sz], str_2[sz * 2];
    ///*cin.getline(str_1, sz);*/
    //cout << "Введите строку с латинской a: ";
    //gets_s(str_1, sz);

    //for (i = 0; i < sz; i++) {
    //    if (str_1[i] == 'a') {
    //        str_2[k] = str_1[i];
    //        k++;
    //        str_2[k] = '!';
    //        k++;
    //    }
    //    else {
    //        str_2[k++] = str_1[i];
    //    }
    //    if (str_1[i] == '\0') {
    //        break;
    //    }
    //}
    //str_2[k] = '\0';
    //cout << "Полученный массив: ";
    //for (int i = 0; i < k; i++) {
    //    cout << str_2[i];
    //}

    // ч2 
    // Дана строка символов, состоящая из букв, цифр, запятых, точек, знаков «+» и «–». Найти количество цифр.
    /*int count = 0;
    char mas[80];
    gets_s(mas);
    for (int i = 0; i < 80; i++) {
        if (*(mas + i) >= '0' && *(mas + i) <= '9') {
            count++;
        }
        if (*(mas + i) == '\0') {
            break;
        }
    }
    cout << "Колличество цифр в данной строке символов = " << count;*/
    
    //Доп 3
    /*char str[200];
    cout << "Введите строку: ";
    gets_s(str);
    remove(str);*/

    //Доп 4
    /*char str[] = "HOW DO YOU DO";
    task_4(str);*/

    // Доп 1
    char str[] = "Бездействие Окно Дверь Безразличие Ручка Безумие";
    char sym[] = "ие";
    finalize(str, sym);




    return 0;
}
