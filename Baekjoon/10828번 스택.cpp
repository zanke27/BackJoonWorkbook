#include <iostream>
using namespace std;

int main(void)
{
	int stack[10000] = { 0, };
	int repeat = 0, num = 0, count = -1;
	
	string str = "";

	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> str;
		if (str == "push")
		{
			cin >> num;
			stack[count+1] = num;
			count++;
		}
		else if (str == "pop")
		{
			if (count == -1)
				cout << -1 << endl;
			else
			{
				cout << stack[count] << endl;
				count--;
			}
		}
		else if (str == "size")
		{
			cout << count+1 << endl;
		}
		else if (str == "empty")
		{
			if (count == -1)
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (str == "top")
		{
			if (count == -1)
				cout << -1 << endl;
			else
				cout << stack[count] << endl;
		}
	}
}