#include <iostream>
#include <map>
using namespace std;

int main(void)
{
	int i, j, n, count = 0;
	string bookName = "";

	cin >> n;

	map<string, int> bestSell;

	for (i = 0; i < n; i++) {
		cin >> bookName;
		if (bestSell.find(bookName) != bestSell.end())
		{
			int add = bestSell.find(bookName)->second + 1;
			bestSell.erase(bookName);
			bestSell.insert({ bookName, add });
		}
		else
			bestSell.insert({ bookName, 1 });
	}

	for (auto iter : bestSell)
	{
		if (iter.second > count)
		{
			count = iter.second;
			bookName = iter.first;
		}
	}

	cout << bookName;
}