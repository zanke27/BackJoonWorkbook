#include <iostream>
using namespace std;

bool Palindrome(string num)
{
	for (int i = 0; i < num.length() / 2; i++)
	{
		if (num[i] != num[num.length() - 1 - i])
			return false;
	}
	return true;
}

int main(void)
{
	string num;

	while (true)
	{
		cin >> num;
		if (num == "0") break;
		if (Palindrome(num))
			cout << "yes" << "\n";
		else
			cout << "no" << "\n";
	}
}