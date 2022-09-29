#include <iostream>
using namespace std;

int main(void)
{
	int result = 0;
	int temp;

	for (int i = 0; i < 5; i++)
	{
		cin >> temp;
		result += (temp * temp);
	}

	result %= 10;
	cout << result;
}