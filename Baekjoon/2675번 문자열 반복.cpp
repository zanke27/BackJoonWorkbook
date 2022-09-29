#include <iostream>
using namespace std;

int main(void)
{
	int t;
	string s;
	string p = "";
	int r;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> r;
		cin >> s;

		for (int i = 0; i < s.length(); i++)
			for (int j = 0; j < r; j++)
				p += s[i];

		cout << p << endl;
		p = "";
	}
}