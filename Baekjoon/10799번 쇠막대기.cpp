#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string str = "";
	int num = 0;
	int count = 0;

	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(')
		{
			if (i < str.length())
			{
				if (str[i + 1] == '(')
					count++;
				else if (str[i + 1] == ')')
					num += count;
			}
		}
		else if (str[i] == ')')
		{
			if (i > 0)
			{
				if (str[i - 1] != '(')
				{
					count--;
					num++;
				}
			}
		}
	}
	cout << num;
}