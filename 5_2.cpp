
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string bukvi(string s, int w[6])
{
	for (int i = 0; i < 6; i++)
		w[i] = 0;
	for (int p = 0; p < s.length(); p++)
	{
		if (s[p] == 'a')
			w[0]++;
		if (s[p] == 'e')
			w[1]++;
		if (s[p] == 'y')
			w[2]++;
		if (s[p] == 'u')
			w[3]++;
		if (s[p] == 'i')
			w[4]++;
		if (s[p] == 'o')
			w[5]++;
	}
	return s;
}

int main()
{
	string s("a a e y3y uu1iii3oo");
	int mas[6];
	bukvi(s, mas);
	cout << s << endl;
	cout << "First test: ";
	if (mas[0] == 2 && mas[1] == 1 && mas[2] == 2 && mas[3] == 2 && mas[4] == 3 && mas[5] == 2)
	{
		cout << "OK" << endl;
	}
	else
	{
		cout << "Ne OK" << endl;
	}
	string g(" ");
	bukvi(g, mas);
	cout << "Space test: ";
	if (mas[0] == 0 && mas[1] == 0 && mas[2] == 0 && mas[3] == 0 && mas[4] == 0 && mas[5] == 0)
	{
		cout << "OK" << endl;
	}
	else
	{
		cout << "Ne OK" << endl;
	}
	return 0;
}