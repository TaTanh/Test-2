#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int flag = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "TC";
	else
		cout << "ko TC";
	return 0;
}