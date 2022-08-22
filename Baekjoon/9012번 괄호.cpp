#include <iostream>
using namespace std;

int main(void)
{
	bool isVps = true;
	string bracket = "";
	int dataNum = 0;
	int checkNum = 0;

	cin >> dataNum;
	for (int i = 0; i < dataNum; i++)
	{
		isVps = true;
		checkNum = 0;

		cin >> bracket;

		for (int i = 0; i < bracket.length(); i++)
		{
			if (bracket[i] == '(')
				checkNum++;
			else if (bracket[i] == ')')
				checkNum--;


			if (checkNum < 0)
				isVps = false;
		}
		if (checkNum > 0)
			isVps = false;

		if (isVps == true)
			cout << "YES" << endl;
		else if (isVps == false)
			cout << "NO" << endl;
	}
}