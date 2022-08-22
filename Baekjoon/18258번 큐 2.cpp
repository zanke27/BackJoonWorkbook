#include <iostream>
using namespace std;

int queue[2000000] = { 0, };

int main(void)
{
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
				cout << queue[rear] << endl;
				rear++;
			}
			else
				cout << -1 << endl;
		}
		else if (command == "size")
		{
			cout << (front + 1) - rear << endl;
		}
		else if (command == "empty")
		{
			if (front >= rear)
				cout << 0 << endl;
			else
				cout << 1 << endl;
		}
		else if (command == "front")
		{
			if (front >= rear)
				cout << queue[rear] << endl;
			else
				cout << -1 << endl;
		}
		else if (command == "back")
		{
			if (front >= rear)
				cout << queue[front] << endl;
			else
				cout << -1 << endl;
		}
	}

}