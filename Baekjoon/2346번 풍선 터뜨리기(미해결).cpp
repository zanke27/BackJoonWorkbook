#include <iostream>
using namespace std;

int main(void)
{
	int n = 0, size = 0, temp = 0, tempSize = 0, traker = 0, nextNum = 0;
	pair<int, int> ballon[1000];
	bool isBurst[1000] = { false, };
	bool isPosNum = false;

	std::cin >> n;
	size = n;

	for (int i = 0; i < size; i++) {
		ballon[i].first = i+1;
		std::cin >> temp;
		ballon[i].second = temp;
	}

	nextNum = ballon[0].first;
	for (int i = 0; i < n; i++) {
		if (i == 0)
		{
			traker = 0;
		}
		else
		{
			isPosNum = ballon[traker].second > 0 ? true : false;
			if (isPosNum == true && ballon[traker].first + ballon[traker].second > size)
			{
				temp = ballon[traker].first + ballon[traker].second;
				temp /= size;
				traker = temp;
			}
			else if (isPosNum == false && ballon[traker].first - ballon[traker].second < 0)
			{
				temp = ballon[traker].first - ballon[traker].second;
				temp *= -1;
				temp /= size;
				traker = temp;
			}
			else
			{
				isPosNum == true ? traker + ballon[traker].second : traker - ballon[traker].second;
			}
		}
		nextNum = ballon[traker].second;
		cout << ballon[traker].first << " ";
	}
}