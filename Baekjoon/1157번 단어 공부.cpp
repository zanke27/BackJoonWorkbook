#include <iostream>
using namespace std;

int main(void)
{
	int word[27] = { 0 , };
	string temp;
	int maxValue = 0;
	int engPos = 0;
	int maxCount = 0;

	cin >> temp;

	for (int i = 0; i < temp.length(); i++)
	{
		if (temp[i] - 97 < 0)
			word[temp[i] - 65]+=1;
		else
			word[temp[i] - 97]+=1;
	}

	for (int i = 0; i < 27; i++)
		if (maxValue < word[i])
		{
			maxValue = word[i];
			engPos = i;
		}

	for (int i = 0; i < 27; i++)
		if (maxValue == word[i]) maxCount++;

	if (maxCount <= 1) cout << (char)(engPos + 65);
	else cout << '?';
}