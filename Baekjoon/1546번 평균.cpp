#include <iostream>
using namespace std;

int main(void)
{
	int n;
	float temp;
	float arr[1000];
	float maxValue = 0;
	float result = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		arr[i] = temp;
		if (temp > maxValue) maxValue = temp;
	}

	for (int i = 0; i < n; i++)
		result += (arr[i] / maxValue) * 100;

	result /= n;
	cout.precision(6);
	cout << result;
}