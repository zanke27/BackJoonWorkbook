#include <iostream>
using namespace std;

int main(void)
{
	int num = 0;
	int range = 1;
	int multi = 0;
	bool isEnd = false;

	cin >> num;

	while(true)
	{
		for (int i = 0; i < range; i++)
			multi++;
		if (num <= 1 + multi * 6)
		{
			isEnd = true;
			break;
		}
		if (isEnd) break;
		range++;
	}

	if (num == 1) cout << 1;
	else cout << range + 1;
}