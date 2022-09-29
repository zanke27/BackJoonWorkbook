#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int result;
	cin >> n;

	for (int i = 1; i < 10; i++)
	{
		result = n * i;
		cout << n << " * " << i << " = " << result << endl;
	}
}