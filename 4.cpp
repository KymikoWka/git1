#include <iostream>
using namespace std;

void toLowerFunc(string &str) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'I' || str[i] == 'U' || str[i] == 'Y') {
			str[i] = tolower(str[i]);
		}
	}
}

int main() {
	string str;
	getline(cin, str);
	toLowerFunc(str);
	cout << str << endl;
	return 0;
}