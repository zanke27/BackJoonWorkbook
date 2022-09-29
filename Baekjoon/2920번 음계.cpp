#include <iostream>
using namespace std;

int main(void)
{
	int arr[8] = { 0, };
	int temp = 0;
	bool isAscending = true;
	bool isDescending = true;

	for (int i = 0; i < 8; i++)
	{
		cin >> temp;
		arr[i] = temp;
		if (arr[i] != i + 1)isAscending = false;
		if (arr[i] != 8 - i)isDescending = false;
	}

	if (isAscending) cout << "ascending";
	else if (isDescending) cout << "descending";
	else cout << "mixed";
}