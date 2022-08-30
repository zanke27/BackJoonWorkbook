#include <iostream>
#include <list>
using namespace std;


int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	list<int> list;
	string str = "";
	int repeat = 0;
	int num = 0;
	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		cin >> str;
		if (str == "push_front")
		{
			cin >> num;
			list.emplace_front(num);
		}
		else if (str == "push_back")
		{
			cin >> num;
			list.emplace_back(num);
		}
		else if (str == "pop_front")
		{
			if (!list.empty())
			{
				cout << list.front() << "\n";
				list.pop_front();
			}
			else
				cout << -1 << "\n";
		}
		else if (str == "pop_back")
		{
			if (!list.empty())
			{
				cout << list.back() << "\n";
				list.pop_back();
			}
			else
				cout << -1 << "\n";
		}
		else if (str == "size")
		{
			cout << list.size() << "\n";
		}
		else if (str == "empty")
		{
			if (list.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (str == "front")
		{
			if (!list.empty())
				cout << list.front() << "\n";
			else
				cout << -1 << "\n";
		}
		else if (str == "back")
		{
			if (!list.empty())
				cout << list.back() << "\n";
			else
				cout << -1 << "\n";
		}
	}
}	