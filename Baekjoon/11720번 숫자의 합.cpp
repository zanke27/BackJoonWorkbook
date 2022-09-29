#include <iostream>
using namespace std;

int main(void)
{
	int n;
	string temp;
	int result = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		result += temp[i] - '0';
	}

	cout << result;
}