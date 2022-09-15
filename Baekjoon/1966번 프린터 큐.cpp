#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int queue[100] = {0,};
	int docNum = 0, myNum = 0, testNum = 0;
	int posNum = 0, tempNum = 0;
	int maxNum = 0, minNum = 0;
	
	cin >> docNum >> posNum;

	for (int i = 0; i < docNum; i++)
	{
		cin >> tempNum;
		queue[i] = tempNum;
		if (i == posNum) myNum = tempNum;
		if (maxNum < tempNum) maxNum = tempNum;
		if (minNum > tempNum) minNum = tempNum;

	}



	//cin >> testNum;

	//for (int i = 0; i < testNum; i++)
	//{

	//}

}