#include <iostream>
#include <stack>
using namespace std;

int Priority(int num)
{
	if (num == '+' || num == '-') return 0;
	else if (num == '*' || num == '/') return 1;
	else return -1;
}

double Yunsan(double a, double b, char ja)
{
	if (ja == '+')
		return a + b;
	else if (ja == '-')
		return a - b;
	else if (ja == '*')
		return a * b;
	else if (ja == '/')
		return a / b;
}

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	stack<char> strStk;
	stack<char> yunsanStk;
	stack<double> floatStk;

	int abcNum = 0;
	int* flowArr;
	string tempStr = "";

	cin >> abcNum;
	flowArr = new int[abcNum];

	cin >> tempStr;

	for (int i = tempStr.length() - 1; i >= 0; i--)
	{
		if (tempStr[i] != '+' && tempStr[i] != '-' &&
			tempStr[i] != '*' && tempStr[i] != '/')
		{
			strStk.push((int)tempStr[i] - 65);
		}
		else
		{
			strStk.push(tempStr[i]);
		}
	}
	// 65 ~ 90
	for (int i = 0; i < abcNum; i++)
	{
		cin >> flowArr[i];
	}

	while(!strStk.empty())
	{
		if (strStk.top() != '+' && strStk.top() != '-' &&
			strStk.top() != '*' && strStk.top() != '/')
		{
			floatStk.push(flowArr[strStk.top()]);
			strStk.pop();
		}
		else
		{
			double b = floatStk.top();
			floatStk.pop();
			double a = floatStk.top();
			floatStk.pop();
			floatStk.push(Yunsan(a, b, strStk.top()));
			strStk.pop();
		}
	}
	
	cout << fixed;
	cout.precision(2);
	cout << (double)floatStk.top() << "\n";
}