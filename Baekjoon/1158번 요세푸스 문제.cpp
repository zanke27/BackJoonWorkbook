#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	queue<int> queue;

	int length = 0;
	int repeatNum = 0;

	cin >> length;
	cin >> repeatNum;	

	for (int i = 1; i <= length; i++)
		queue.push(i);
	
	cout << "<";
	while (true)
	{
		for (int i = 1; i < repeatNum; i++)
		{
			queue.push(queue.front());
			queue.pop();
		}
		cout << queue.front();
		queue.pop();
		if (queue.empty())
			break;
		cout << ", ";
	}
	cout << ">";
}