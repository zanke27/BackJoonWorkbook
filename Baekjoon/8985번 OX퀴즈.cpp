#include <iostream>
using namespace std;

int main(void)
{
	int weight = 0;
	int result = 0;
	int t = 0;
	string temp = "";

	cin >> t;

	for (int k = 0; k < t; k++)
	{
		weight = 0;
		result = 0;

		cin >> temp;

		for (int i = 0; i < temp.length(); i++)
		{
			if (temp[i] == 'O')
				weight++;
			else if (temp[i] == 'X')
				weight = 0;

			result += weight;
		}

		cout << result << endl;
	}

}