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
	string s;
	int mas[6];
	getline(cin,s);
    bukvi(s,mas);
    cout << "a = " << mas[0] << " " << "e = " << mas[1] << " " << "y = " << mas[2] << " " << "u = " << mas[3] << " " << "i = " << mas[4] << " " << "o = " << mas[5] << endl;
	return 0;
}
