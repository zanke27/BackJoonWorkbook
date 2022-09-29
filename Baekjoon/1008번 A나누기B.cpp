#include <iostream>
using namespace std;

int main(void)
{
	double a, b;
	cin >> a >> b;
	cout.precision(10); // 소수점 10자리까지 나오게
	cout << a / b;
}