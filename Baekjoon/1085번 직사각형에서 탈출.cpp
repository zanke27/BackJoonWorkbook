#include <iostream>
using namespace std;

int main(void)
{
	int x = 0, y = 0, w = 0, h = 0;
	int shortNum = 0;

	cin >> x >> y >> w >> h;

	shortNum = w - x < x ? w - x : x; 
	shortNum = h - y < shortNum ? h - y < y ? h-y : y : shortNum < y ? shortNum : y;

	cout << shortNum;
}