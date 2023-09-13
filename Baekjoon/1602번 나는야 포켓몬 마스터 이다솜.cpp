#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void)
{
	int i, j, n, m, number = 0;
	string name = "", temp = "";
	string* buf;

	map<string, int> poketmonDicStr;
	map<int, string> poketmonDicInt;

	cin >> n >> m;

	buf = new string[m];

	for (i = 1; i <= n; i++) {
		cin >> name;
		poketmonDicStr.insert({ name, i });
		poketmonDicInt.insert({ i, name });
	}

	for (i = 0; i < m; i++) {
		cin >> temp;

		if (isdigit(temp[0]))
		{
			number = stoi(temp);
			buf[i] = poketmonDicInt.find(number)->second;
		}
		else
		{
			buf[i] = to_string(poketmonDicStr.find(temp)->second);
		}
	}

	for (int i = 0; i < m; i++) {
		cout << buf[i] << '\n';
	}

}