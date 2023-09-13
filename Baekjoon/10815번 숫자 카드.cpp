#include <iostream>
#include <unordered_set>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int i, n, m, number = 0;

	unordered_set<int> haveCard;

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> number;
		haveCard.insert(number);
	}

	cin >> m;

	for (i = 0; i < m; i++) {
		cin >> number;
		if (haveCard.find(number) != haveCard.end())
			cout << 1 << " ";
		else
			cout << 0 << " ";
	}
}