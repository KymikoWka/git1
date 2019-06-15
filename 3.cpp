#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	string s;
	getline(cin,s);
	s.length();
	for (int p = 0; p < s.length(); p++)
	{
		if (s[p] == 'A')
			s[p] = 'a';
		if (s[p] == 'E')
			s[p] = 'e';
		if (s[p] == 'Y')
			s[p] = 'y';
		if (s[p] == 'U')
			s[p] = 'u';
		if (s[p] == 'I')
			s[p] = 'i';
		if (s[p] == 'O')
			s[p] = 'o';
	}
	cout << s << endl;
	system("pause");
	return 0;
}