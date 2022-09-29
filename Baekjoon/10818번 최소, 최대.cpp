#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	int temp;
	int max = 0;
	int min = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (i == 0)
		{
			max = temp;
			min = temp;
		}

		if (max < temp) max = temp;
		if (min > temp) min = temp;
	}

	cout << min << " " << max;
}