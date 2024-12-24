#include <stdio.h>
#include <iostream>
#include <time.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru");
    srand(time(0));

    //ЗАДАНИЕ 1

    //int a; 
    //errno_t err;
    //FILE* f;
    ////Запись
    //err = fopen_s(&f, "test.txt", "w");
    //if (err != 0)
    //{
    //    perror("Невозможно создать файл\n");
    //    return EXIT_FAILURE;
    //}
    //for (a = 0; a < 70; a += 3)
    //{
    //    fprintf(f, "%d, ", a);
    //}
    //printf("Данные записаны в файл test.txt\n");
    //fclose(f);
    //err = fopen_s(&f, "test.txt", "r");
    //if (err != 0)
    //{
    //    perror("Невозможно создать файл\n");
    //    return EXIT_FAILURE;
    //}
    //char mas[100];
    //fgets(mas, sizeof(mas), f);
    //printf(mas);
    //fclose(f);

    //ЗАДАНИЕ 2

    //FILE* mf; char str[50]; errno_t err;
    //char* estr;
    //printf("Введите текст ");
    //gets_s(str);
    //fopen_s(&mf, "tst.txt", "w");       //Открытие для записи
    //fputs(str, mf); fputs("\n", mf);
    //fclose(mf);
    //err = fopen_s(&mf, "tst.txt", "r");  //Открытие для чтения
    //if (err != NULL)                 //Проверка открытия файла
    //{
    //    printf("Ошибка открытия файла\n"); return -1;
    //}
    //else
    //    printf("\nСчитаны строки:\n");    estr = fgets(str, sizeof(str), mf); //Чтение строки файла      
    //if (estr == NULL)         //Конец файла или ошибка чтения?
    //    if (feof(mf) != 0)
    //        printf("\nЧтение файла закончено\n");
    //    else
    //    {
    //        printf("\nОшибка чтения из файла\n");
    //        return -1;
    //    }
    //puts(estr);
    //if (fclose(mf) == EOF)
    //    printf("Ошибка закрытия\n");

    //ЗАДАНИЕ 3

    /*FILE* fp;
    errno_t err;
    char const* st = "привет";
    err = fopen_s(&fp, "a.bin", "wb");
    if (err != 0)
    {
        perror("ошибка открытия a.bin");
        return EXIT_FAILURE;
    }
    fwrite(st, strlen(st), 1, fp);

    printf("Записан элемент\n");
    fclose(fp);

    fopen_s(&fp, "a.bin", "rb");
    char mas[8] = {0};
    fread(mas, sizeof(mas), 1, fp);
    printf(mas);
    fclose(fp);*/

    //ЗАДАНИЕ 4
    /*int m = 0, number = 0, pr = 0;
    long fsize;
    char pd;
    FILE* fd;
    errno_t err;
    err = fopen_s(&fd, "b.txt", "r");
    if (err != 0)
    {
        perror("ошибка открытия b.txt");
        return -1;
    }
    fseek(fd, 0L, SEEK_END);
    fsize = ftell(fd);
    fseek(fd, 0L, SEEK_SET);
    printf("Введите номер предложения ");
    scanf_s("%d", &number);
    for (int k = 1; k <= fsize; k++)
    {
        fread((void*)&pd, sizeof(char), 1, fd);
        if (pd == '.')   pr++;
        if ((number - 1) == pr)  m++;
        if (number == pr)
        {
            long pos1 = k - m - 1;
            if (number != 1) pos1++;
            fseek(fd, pos1, SEEK_SET);
            printf("%d-е предложение: ", number);
            for (int i = 0; i <= m; i++)
            {
                fread((void*)&pd, sizeof(char), 1, fd);
                printf("%c", pd);
            }
            break;
        }
    }
    if (number > pr)
        printf("Такого номера нет");
    fclose(fd);*/

    //ЗАДАНИЕ 5 часть 1
    /*FILE* NameA, *NameB, *NameC, *NameD;
    int numA, numB, numC, max_num;
    errno_t err;
    err = fopen_s(&NameA, "task_5/txtA.txt", "r");
    if (err != 0){
        perror("Ошибка");
        return EXIT_FAILURE;
    }
    err = fopen_s(&NameB, "task_5/txtB.txt", "r");
    if (err != 0) {
        perror("Ошибка");
        return EXIT_FAILURE;
    }
    err = fopen_s(&NameC, "task_5/txtC.txt", "r");
    if (err != 0) {
        perror("Ошибка");
        return EXIT_FAILURE;
    }
    err = fopen_s(&NameD, "task_5/txtD.txt", "w");
    if (err != 0) {
        perror("Ошибка");
        return EXIT_FAILURE;
    }

    while (fscanf_s(NameA, "%d", &numA) != EOF &&
        fscanf_s(NameB, "%d", &numB) != EOF &&
        fscanf_s(NameC, "%d", &numC) != EOF){
        max_num = numA > numB ? numA : numB;
        max_num = numC > max_num ? numC : max_num;
        fprintf(NameD, "%d ", max_num);
    }

    fclose(NameA);
    fclose(NameB);
    fclose(NameC);
    fclose(NameD);*/

    //Часть 2
    /*FILE* A, * B, * C, * D;
    int numsA, numsB, numsC;
    errno_t err;
    err = fopen_s(&A, "task_5/A.txt", "r");
    if (err != 0){
        perror("Ошибка");
        return EXIT_FAILURE;
    }
    err = fopen_s(&B, "task_5/B.txt", "r");
    if (err != 0) {
        perror("Ошибка");
        return EXIT_FAILURE;
    }
    err = fopen_s(&C, "task_5/C.txt", "r");
    if (err != 0) {
        perror("Ошибка");
        return EXIT_FAILURE;
    }
    err = fopen_s(&D, "task_5/D.txt", "w");
    if (err != 0) {
        perror("Ошибка");
        return EXIT_FAILURE;
    }

    while (fscanf_s(A, "%d", &numsA) != EOF &&
        fscanf_s(B, "%d", &numsB) != EOF&&
        fscanf_s(C, "%d", &numsC) != EOF){
        fprintf(D, "%d, %d, %d\n", numsA, numsB, numsC);
    }

    fclose(A);
    fclose(B);
    fclose(C);
    fclose(D);*/
    
    //Доп 16 Часть 1
    /*FILE* fileA, * fileB, * fileC;
    int a, b, sum;
    errno_t err;
    err = fopen_s(&fileA, "dop16/fileA.txt", "r");
    if (err !=0){
        perror("Ошибка");
        return EXIT_FAILURE;
    }
    err = fopen_s(&fileB, "dop16/fileB.txt", "r");
    if (err != 0) {
        perror("Ошибка");
        return EXIT_FAILURE;
    }
    err = fopen_s(&fileC, "dop16/fileC.txt", "w");
    if (err != 0) {
        perror("Ошибка");
        return EXIT_FAILURE;
    }
    while (fscanf_s(fileA, "%d", &a) != EOF &&
        fscanf_s(fileB, "%d", &b) != EOF){
        sum = a + b;
        fprintf(fileC, "%d ", sum);
    }
    fclose(fileA);
    fclose(fileB);
    fclose(fileC);*/

    //Часть 2
    /*FILE* file1, * file2;
    int a;
    errno_t err;
    err = fopen_s(&file1, "dop16/file1.txt", "w");
    if (err != 0) {
        perror("Ошибка");
        return EXIT_FAILURE;
    }
    for (int i = 0; i < 4; i++){
        for (int z = 0; z < 5; z++){
            a = 10 + rand() % 11 ;
            fprintf(file1, "%d ", a);
        }
        for (int j = 0; j < 5; j++) {
            a = rand() % 6 - 15;
            fprintf(file1, "%d ", a);
        }
    }
    fclose(file1);
    err = fopen_s(&file1, "dop16/file1.txt", "r");
    if (err != 0) {
        perror("Ошибка");
        return EXIT_FAILURE;
    }

    int mas[40] = { 0 };
    for (int i = 0; i < 40; i++) {
        fscanf_s(file1, "%d", &a);
        mas[i] = a;
        cout << mas[i] << " ";
    }
    fclose(file1); cout << endl;
    
    int count = 0;
    int index_p = 0, index_m = 0;
    int mas_plus[20] = { 0 }, mas_minus[20] = { 0 };
    for (int i = 0; i < 40; i++){
        if (count < 5) {
            mas_plus[index_p++] = mas[i];
        }
        if (count >= 5){
            mas_minus[index_m++] = mas[i];
        }
        count = (count + 1) % 10;
    }

    err = fopen_s(&file2, "dop16/file2.txt", "w");
    if (err != 0) {
        perror("Ошибка");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 10; j++) {
            fprintf(file2, "%d ", mas_plus[j]);
            cout << mas_plus[j] << " ";
        }
        for (int z = 0; z < 10; z++) {
            fprintf(file2, "%d ", mas_minus[z]);
            cout << mas_minus[z] << " ";
        }
    }
    fclose(file2);*/

    //Доп 12 часть 1
    /*FILE* fd, *str;
    int k;
    float number, cols;
    errno_t err;
    err = fopen_s(&fd, "dop12/task.txt", "r");
    if (err != 0){
        perror("ошибка открытия task.txt");
        return -1;
    }

    fscanf_s(fd, "%f", &cols);

    cout << "Введите номер строки матрицы: ";
    cin >> k;
    for (int i = 0; i < (k - 1) * (int)cols; i++) {
        fscanf_s(fd, "%f", &number);
    }

    err = fopen_s(&str, "dop12/str.txt", "w");
    if (err != 0){
       perror("ошибка открытия task.txt");
       return -1;
    }

    for (int i = 0; i < cols; i++) {
        fscanf_s(fd, "%f", &number);
        fprintf(str, "%2.3f ", number);
    }

    fclose(fd);
    fclose(str);*/

    //ЧАСТЬ 2
    /*FILE* NameA, *NameB, *NameC, *NameD;
    int numA, numB, numC, min_num;
    errno_t err;
    err = fopen_s(&NameA, "dop12/txtA.txt", "r");
    if (err != 0){
        perror("Ошибка");
        return EXIT_FAILURE;
    }
    err = fopen_s(&NameB, "dop12/txtB.txt", "r");
    if (err != 0) {
        perror("Ошибка");
        return EXIT_FAILURE;
    }
    err = fopen_s(&NameC, "dop12/txtC.txt", "r");
    if (err != 0) {
        perror("Ошибка");
        return EXIT_FAILURE;
    }
    err = fopen_s(&NameD, "dop12/txtD.txt", "w");
    if (err != 0) {
        perror("Ошибка");
        return EXIT_FAILURE;
    }

    while (fscanf_s(NameA, "%d", &numA) != EOF &&
        fscanf_s(NameB, "%d", &numB) != EOF &&
        fscanf_s(NameC, "%d", &numC) != EOF){
        min_num = numA < numB ? numA : numB;
        min_num = numC < min_num ? numC : min_num;
        fprintf(NameD, "%d ", min_num);
    }

    fclose(NameA);
    fclose(NameB);
    fclose(NameC);
    fclose(NameD);*/

    //Доп 4 Часть 1
    /*FILE* A, * B;
    int numsA;
    errno_t err;
    err = fopen_s(&A, "dop4/fileA.txt", "r");
    if (err != 0){
        perror("Ошибка");
        return EXIT_FAILURE;
    }
    err = fopen_s(&B, "dop4/fileB.txt", "w");
    if (err != 0) {
        perror("Ошибка");
        return EXIT_FAILURE;
    }

    while (fscanf_s(A, "%d", &numsA) != EOF){
        if (numsA > 0){
            fprintf(B, "%d ", numsA);
        }
    }

    fclose(A);
    fclose(B);*/

    //ЧАСТЬ 2
    /*FILE* f, *g;
    int num, fnum;
    errno_t err;
    err = fopen_s(&f, "dop4/f.txt", "w");
    if (err != 0) {
        perror("Ошибка");
        return EXIT_FAILURE;
    }
    for (int i = 0; i < 10; i++){
        num = 10 + rand() % 89;
        fprintf(f, "%d ", num);
    }
    fclose(f);
    cout << "Введите число num: ";
    cin >> num;
    err = fopen_s(&f, "dop4/f.txt", "r");
    if (err != 0) {
        perror("Ошибка");
        return EXIT_FAILURE;
    }
    err = fopen_s(&g, "dop4/g.txt", "w");
    if (err != 0) {
        perror("Ошибка");
        return EXIT_FAILURE;
    }
    while (fscanf_s(f, "%d", &fnum) != EOF) {
        if (fnum > num) {
            fprintf(g, "%d ", fnum);
        }
    }
    fclose(f);
    fclose(g);*/

    return 0;
}
