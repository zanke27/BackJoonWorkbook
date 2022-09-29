#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;

	cin >> n;

	for (int i = n; i > 0; i--)
	{
		cout << i << "\n";
	}
}