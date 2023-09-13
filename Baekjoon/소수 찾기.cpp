#include <iostream>
using namespace std;

bool Prime(int num)
{
	for (int i = 2; i <= num / 2; i++)
		if ((num % i) == 0) return false;
	return true;
}

int main(void)
{
	int num, count, result = 0;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> num;
		if (num == 0 || num == 1) continue;
		if (Prime(num))
			result++;
	}
	cout << result;
}