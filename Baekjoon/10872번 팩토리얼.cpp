#include <iostream>
using namespace std;

int Facto(int n)
{
	if (n <= 1) return 1;

	return Facto(n - 1) * n;
}

int main(void)
{
	int i = 0;

	cin >> i;

	cout << Facto(i);
}