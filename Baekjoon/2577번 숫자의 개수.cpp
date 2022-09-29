#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int arr[10] = { 0, };
	int a, b, c;
	int result = 0;
	string temp = "";

	cin >> a >> b >> c;
	result = a * b * c;

	temp = to_string(result);
	
	for (int i = 0; i < temp.length(); i++)
		arr[(int)(temp[i] - 48)]++;

	for (int i = 0; i < 10; i++)
		cout << arr[i] << endl;
}