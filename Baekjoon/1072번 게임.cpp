#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	long long x, y, left, right, mid = -1, result = 0, origin = 0, end = -1;

	cin >> x >> y;

	if (x <= y || x == 0)
		cout << -1;
	else
	{
		left = 0;
		right = x + x / 10;
		origin = y * 100 / x;
		while (left <= right)
		{
			mid = (left + right) / 2;

			result = (y + mid) * 100 / (x + mid);

			if (result > origin)
			{
				right = mid - 1;
				end = mid;
			}
			else
				left = mid + 1;
		}
		cout << end;
	}
}