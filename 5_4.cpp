#include <iostream>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cstdio>
using namespace std;

char* toLowerFunc(string str) {
	string &s = str;
	char a[100];
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'I' || str[i] == 'U' || str[i] == 'Y') {
			str[i] = tolower(str[i]);
		}
	}
	for (int i = 0; i < str.length(); i++) {
		a[i] = str[i];
	}
	return a;
}

int main() {
	if (strcmp(toLowerFunc("ASSPe"), "aSSPe") || strcmp(toLowerFunc("RE"), "Re")
		|| strcmp(toLowerFunc(""), "") || strcmp(toLowerFunc("AQW IOP TYE"), "aQW ioP Tye")) {
		cout << "Ne ok" << endl;
		return 1;
	}
	else {
		cout << "Ok" << endl;
	}
	return 0;
}
