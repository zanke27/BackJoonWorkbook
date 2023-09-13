#include <iostream>
#include <map>
using namespace std;

int main(void)
{
	int i, j, n, count = 0;
	string word = "";
	char tempWord = '\0';

	map<char, bool> checker;

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> word;

		tempWord = '\0';
		checker.clear();

		for (j = 0; j < word.length(); j++) {
			// 찾을 수 없다면
			if (checker.find(word[j]) == checker.end()) {
				checker.insert({ word[j], true });
			}
			// 찾을 수 있다면
			else {
				if (j != 0 && tempWord != word[j]) {
					count++;
					break;
				}
			}
			tempWord = word[j];
		}
	}

	cout << n - count;

}