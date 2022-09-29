#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string temp;
	int count = 0;
	bool isComeWord = false;
	getline(cin, temp);

	for (int i = 0; i < temp.size(); i++)
	{
		if (temp[i] == ' ')
		{
			if (i == 0) {}
			else if (i == temp.size() - 1) {}
			else
				count++;
		}
		else isComeWord = true;
	}
	
	if (isComeWord == false) cout << 0;
	else cout << count + 1;
}