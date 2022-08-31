#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	queue<int> queue;

	int testNum = 0, docNum = 0;
	int posNum = 0, tempNum = 0;
	int count = 0;
	int myNum = 0;
	cin >> docNum;
	cin >> posNum;

	for (int i = 0; i < docNum; i++)
	{
		cin >> tempNum;
		queue.push(tempNum);
		if (i == posNum) myNum = tempNum;
	}



	//cin >> testNum;

	//for (int i = 0; i < testNum; i++)
	//{

	//}

}