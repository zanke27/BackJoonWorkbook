#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int i, j, n, m, number = 0, count = 0;
	string name = "";
	vector<string> vec;

	unordered_map<string, bool> cantListen;

	cin >> n >> m;

	for (i = 0; i < n; i++) {
		cin >> name;
		cantListen.insert({ name, true });
	}

	for (j = 0; j < m; j++) {
		cin >> name;
		if (cantListen.find(name) != cantListen.end())
			vec.push_back(name);
	}

	sort(vec.begin(), vec.end());

	cout << vec.size() << '\n';
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << '\n';
	}

}