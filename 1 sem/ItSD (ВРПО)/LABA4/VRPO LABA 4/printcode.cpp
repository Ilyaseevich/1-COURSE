#include "printcode.h"

void printcode(string str){
	for (char ch : str) {
		if (isdigit(ch)) {
			int z = (int)(ch);
		    cout << z << endl;
		}
	}
}
