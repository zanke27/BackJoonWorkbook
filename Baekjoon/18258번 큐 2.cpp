#include <iostream>
using namespace std;

int queue[2000000] = { 0, };

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int count = 0;
	string command = "";

	int num = 0;
	int front = -1;
	int rear = 0;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> command;

		if (command == "push")
		{
			cin >> num;
			front++;
			queue[front] = num;
		}
		else if (command == "pop")
		{
			if (front >= rear)
			{
				cout << queue[rear] << "\n";
				rear++;
			}
			else
				cout << -1 << "\n";
		}
		else if (command == "size")
		{
			cout << (front + 1) - rear << "\n";
		}
		else if (command == "empty")
		{
			if (front >= rear)
				cout << 0 << "\n";
			else
				cout << 1 << "\n";
		}
		else if (command == "front")
		{
			if (front >= rear)
				cout << queue[rear] << "\n";
			else
				cout << -1 << "\n";
		}
		else if (command == "back")
		{
			if (front >= rear)
				cout << queue[front] << "\n";
			else
				cout << -1 << "\n";
		}
	}

}