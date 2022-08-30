#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	queue<int> queue;
	int num = 0;

	cin >> num;

	for (int i = 1; i <= num; i++)
		queue.push(i);

	while (true)
	{
		if (queue.size() == 1)
			break;
		queue.pop();
		queue.push(queue.front());
		queue.pop();
	}
	cout << queue.front();
}