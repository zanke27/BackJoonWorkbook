#include <iostream>
using namespace std;

int main(void)
{
	int arr[9] = { 0, };
	int max = 0;
	int count = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];

		if (max < arr[i])
		{
			max = arr[i];
			count = i + 1;
		}
	}

	cout << max << endl << count;
}