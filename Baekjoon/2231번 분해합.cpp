#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int num;
	int tempNum = 0;
	int result = 0;
	string strNum;
	string temp;

	cin >> num;

	temp = to_string(num);

	for (int i = num - (9 * temp.length()); i <= num; i++)
	{
		if (i == num)
		{
			cout << 0;
			break;
		}
		result = i;
		tempNum = i;
		strNum = to_string(i);
		for (int j = 0; j < strNum.length(); j++)
			tempNum += strNum[j] - '0';
		if (tempNum == num)
		{
			cout << result;
			break;
		}
	}
}