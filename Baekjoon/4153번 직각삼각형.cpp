#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	if (a > b)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
}

int main(void)
{
	int a = 0, b = 0, c = 0, temp;

	while (true)
	{
		cin >> a >> b >> c;

		swap(a, b);
		swap(b, c);

		if (a == b && b == c && c == 0)
			break;
		
		if ((a * a + b * b) == c * c)
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
}