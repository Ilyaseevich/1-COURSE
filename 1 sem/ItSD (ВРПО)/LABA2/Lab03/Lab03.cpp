#include <iostream>
using namespace std;

//Для UTF-8
//Берём из Юникода и переводим

/*
IlyaseevichRoman2007
 49 6C 79 61 73 65 65 76 69 63 68 52 6F 6D 61 6E 32 30 30 37
 UTF-8: 49 6C 79 61 73 65 65 76 69 63 68 52 6F 6D 61 6E 32 30 30 37
 UTF-16: \u0049 \u006C \u0079 \u0061 \u0073 \u0065 \u0065 \u0076 \u0069 \u0063 \u0068 \u0052 \u006F \u006D \u0061 \u006E \u0032 \u0030 \u0030 \u0037

*/

/*
ИльясеевичРоманСергеевич2007
C8 EB FC FF F1 E5 E5 E2 E8 F7 D0 EE EC E0 ED D1 E5 F0 E3 E5 E5 E2 E8 F7 32 30 30 37
UTF-8: D098 D0BB D18C D18F D181 D0B5 D0B5 D0B2 D0B8 D187 D0A0 D0BE D0BC D0B0 D0BD D0A1
D0B5 D180 D0B3 D0B5 D0B5 D0B2 D0B8 D187 32 30 30 37
UTF-16:\u0418 \u043b \u044c \u044f \u0441 \u0435 \u0435 \u0432 \u0438 \u0447 \u0420 \u043e \u043c \u0430 \u043d \u0421 \u0435 \u0440 \u0433 \u0435 \u0435 \u0432 \u0438 \u0447 \u0032 \u0030 \u0030 \u0037
*/

/*
Ильясеевич2007Roman
C8 EB FC FF F1 E5 E5 E2 E8 F7 32 30 30 37 68 52 6F 6D 61 6E
UTF-8: D098 D0BB D18C D18F D181 D0B5 D0B5 D0B2 D0B8 D187 32 30 30 37 68 52 6F 6D 61 6E
UTF-16: \u0418 \u043b \u044c \u044f \u0441 \u0435 \u0435 \u0432 \u0438 \u0447 \u0052 \u006f \u006d \u0061 \u006e \u0032 \u0030 \u0030 \u0037
*/


int main() {
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfio[] = "IlyaseevichRoman2007";
	char rfio[] = "ИльясеевичРоманСергеевич2007";
	char lr[] = "Ильясеевич2007Roman";
	wchar_t Lfio[] = L"IlyaseevichRoman2007";
	wchar_t Rfio[] = L"ИльясеевичРоманСергеевич2007";
	wchar_t Lr[] = L"Ильясеевич2007Roman";

	cout << hello << lfio << endl;

	return 0;
}
